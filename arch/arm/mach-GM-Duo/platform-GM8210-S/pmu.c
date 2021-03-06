#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/platform_device.h>
#include <asm/io.h>
#include <mach/ftpmu010.h>
#include <mach/platform/board.h>
#include <linux/synclink.h>

#define SYS_CLK 12000000

static void __iomem    *pmu_base_addr = (void __iomem *)NULL;

/* PMU register data */
/* PMU register data */
static int i2c_fd = -1;
#ifdef CONFIG_GPIO_FTGPIO010
static int gpio_fd = -1;
#endif
static int dmac_fd = -1;
#ifdef CONFIG_PLATFORM_AXIDMA
static int xdmac_fd = -1;
#endif

static int cpuintr_fd = -1;
/* -----------------------------------------------------------------------
 * Clock GATE table. Note: this table is necessary
 * -----------------------------------------------------------------------
 */
ftpmu010_gate_clk_t gate_tbl[] = {
    /* moduleID,    count, register (ofs, val, mask) */
    {FTPMU_H264E_0, 2,     {{0xB0, (0x0 << 25),  (0x1 << 25)}, {0xB0, (0x0 << 3),  (0x1 << 3)}}},
    {FTPMU_H264E_1, 2,     {{0xB4, (0x0 << 30),  (0x1 << 30)}, {0xB4, (0x0 << 8),  (0x1 << 8)}}},   /* mcp280off */
    {FTPMU_H264D_0, 2,     {{0xB0, (0x0 << 24),  (0x1 << 24)}, {0xB0, (0x0 << 2),  (0x1 << 2)}}},
    {FTPMU_H264D_1, 2,     {{0xB4, (0x0 << 29),  (0x1 << 29)}, {0xB4, (0x0 << 3),  (0x1 << 3)}}},   /* mcp300off */
    {FTPMU_MCP100_0,1,     {{0xB4, (0x0 << 12),  (0x1 << 12)}}},   /* mcp100off */
    {FTPMU_3DI_0,   2,     {{0xB0, (0x0 << 22),  (0x1 << 22)}, {0xB0, (0x0 << 15), (0x1 << 15)}}},  /* di3d0off */
  	{FTPMU_SCALER_0,2,     {{0xB0, (0x0 << 26),  (0x1 << 26)}, {0xB0, (0x0 << 4),  (0x1 << 4)}}},  /* scaroff */
    {FTPMU_NONE,    0,     {{0x0,   0x0,         0x0}}} /* END, this row is necessary */
};
/* I2C
 */
static pmuReg_t  regI2cArray[] = {
 /* reg_off  bit_masks  lock_bits     init_val    init_mask */

#ifdef CONFIG_I2C0_IP
    {0xB8, (0x1 << 14), (0x1 << 14), (0x0 << 14), (0x1 << 14)}, // Disable i2c0 gating clock off
    {0x44, (0x1 << 12), (0x1 << 12), (0x1 << 12), (0x1 << 12)}, // Enable i2c0 schmitt trigger
#endif
#ifdef CONFIG_I2C1_IP
	{0xBC, (0x1 << 16), (0x1 << 16), (0x0 << 16), (0x1 << 16)}, // Enable i2c1 gating clock off
    {0x44, (0x1 << 16), (0x1 << 16), (0x1 << 16), (0x1 << 16)}, // i2c1 schmitt trigger
    {0x50, (0x3 << 22), (0x3 << 22), (0x0 << 22), (0x3 << 22)}, // i2c1 pin mux, 00b:I2C1, 01b:GPIO[48:49], 10b:I2S5_SCLK/I2S5_FS
#endif
#ifdef CONFIG_I2C2_IP
	{0xBC, (0x1 << 13), (0x1 << 13), (0x0 << 13), (0x1 << 13)}, // i2c1 gating clock off
    {0x44, (0x1 << 17), (0x1 << 17), (0x1 << 17), (0x1 << 17)}, // i2c1 schmitt trigger
    {0x50, (0x3 << 24), (0x3 << 24), (0x0 << 24), (0x3 << 24)}, // i2c1 pin mux, 00b:I2C1, 01b:GPIO[48:49], 10b:I2S5_SCLK/I2S5_FS
#endif
#ifdef CONFIG_I2C3_IP
	{0xBC, (0x1 << 14), (0x1 << 14), (0x0 << 14), (0x1 << 14)}, // i2c1 gating clock off
    {0x44, (0x1 << 18), (0x1 << 18), (0x1 << 18), (0x1 << 18)}, // i2c1 schmitt trigger
    {0x50, (0x3 << 26), (0x3 << 26), (0x0 << 26), (0x3 << 26)}, // i2c1 pin mux, 00b:I2C1, 01b:GPIO[48:49], 10b:I2S5_SCLK/I2S5_FS
#endif
#ifdef CONFIG_I2C4_IP
	{0xBC, (0x1 << 15), (0x1 << 15), (0x0 << 15), (0x1 << 15)}, // i2c1 gating clock off
    {0x44, (0x1 << 19), (0x1 << 19), (0x1 << 19), (0x1 << 19)}, // i2c1 schmitt trigger
    {0x50, (0x3 << 28), (0x3 << 28), (0x0 << 28), (0x3 << 28)}, // i2c1 pin mux, 00b:I2C1, 01b:GPIO[48:49], 10b:I2S5_SCLK/I2S5_FS
#endif
#ifdef CONFIG_I2C5_IP
    {0xBC, (0x1 << 10), (0x1 << 10), (0x0 << 10), (0x1 << 10)}, // i2c1 gating clock off
    {0x44, (0x1 << 20), (0x1 << 19), (0x1 << 20), (0x1 << 20)}, // i2c1 schmitt trigger
    {0x4C, (0x3 <<  6), (0x3 <<  6), (0x0 <<  6), (0x3 <<  6)}, // i2c1 pin mux, 00b:I2C1, 01b:GPIO[48:49], 10b:I2S5_SCLK/I2S5_FS
#endif
};

static pmuRegInfo_t i2c_clk_info = {
    "i2c_clk",
    ARRAY_SIZE(regI2cArray),
    ATTR_TYPE_NONE, /* no clock source */
    regI2cArray
};

/* GPIO
 */
static pmuReg_t regGPIOArray[] = {
     /* reg_off  bit_masks  lock_bits     init_val    init_mask */
        {0x3C, (0x7 << 9), (0x7 << 9), (0x0 << 9), (0x7 << 9)},
};

static pmuRegInfo_t gpio_clk_info = {
        "gpio_clk",
        ARRAY_SIZE(regGPIOArray),
        ATTR_TYPE_NONE, /* no clock source */
        regGPIOArray
};

/* DMAC
 */
static pmuReg_t regDMACArray[] = {
 /* reg_off  bit_masks  lock_bits     init_val    init_mask */
    {0xB4, (0x1 << 16), (0x1 << 16), (0x0 << 16), (0x1 << 16)},
};

static pmuRegInfo_t dmac_clk_info = {
    "AHB_DMAC_CLK",
    ARRAY_SIZE(regDMACArray),
    ATTR_TYPE_AHB,
    regDMACArray
};



#ifdef CONFIG_PLATFORM_AXIDMA
/* AXI DMAC
 */
static pmuReg_t regXDMACArray[] = {
 /* reg_off  bit_masks  lock_bits     init_val    init_mask */
    {0xB0, (0x1 << 19), (0x1 << 19), (0x0 << 19), (0x1 << 19)},
};
static pmuRegInfo_t xdmac_clk_info = {
    "AXI_DMAC_CLK",
    ARRAY_SIZE(regXDMACArray),
    ATTR_TYPE_AXI,
    regXDMACArray
};
#endif

/* CPU INTR
 */
static pmuReg_t regCPUINTArray[] = {
 /* reg_off  bit_masks   lock_bits     init_val    init_mask */
    {0xA8,   0xFFFFFFFF, 0xFFFFFFFF,   0x0,        0x0},
};

static pmuRegInfo_t cpu_intr_info = {
    "CPU_INTR",
    ARRAY_SIZE(regCPUINTArray),
    ATTR_TYPE_NONE, /* no clock source */
    regCPUINTArray
};

/* 0 for system running NAND, -1 for spi, 1 for SMC */
int platform_check_flash_type(void)
{
	static unsigned int data = 0;
	int ret = 0;

	data = ioread32(pmu_base_addr + 0x4);

    if (data & BIT22)
        if (data & BIT23)
            ret = -1;
        else
            ret = 0;
    else
        ret = 1;

	return ret;
}

static unsigned int pmu_get_version(void)
{
	static unsigned int version = 0;
	pmuver_t pmuver;
	unsigned int product;

	/*
	 * Version ID:
	 *     821010: A version
	 *     821011: B version
	 */
	if (!version) {
        product = (ioread32(pmu_base_addr) >> 16) & 0xFFFF;
	    version = (ioread32(pmu_base_addr) >> 8) & 0xFF;

	    printk("IC: GM%x, version: 0x%x \n", product, version);
	}

    switch (version) {
      case 0x10:
        pmuver = PMUVER_A;
        break;
      case 0x11:
        pmuver = PMUVER_B;
        break;
      case 0x12:
        pmuver = PMUVER_C;
        break;
      default:
        pmuver = PMUVER_UNKNOWN;
        break;
    }

	return (unsigned int)pmuver;
}

//format: xxxx_yyyy. xxxx: 8210, yyyy:IC revision
unsigned int pmu_get_chipversion(void)
{
    unsigned int value = (0x8210 << 16);

    value |= pmu_get_version();

    return value;
}

/*
 * Local functions
 */
static inline u32 pmu_read_cpumode(void)
{
    return (ioread32(pmu_base_addr + 0x30) >> 16);
}

static inline u32 pmu_read_pll1out(void)
{
    u32 value = 0;

    value = ioread32(pmu_base_addr + 0x30);
    value = (value >> 3) & 0x7F;

    return (SYS_CLK * value);
}

static unsigned int pmu_read_pll4out(void)
{
	u32 value;

    value = (ioread32(pmu_base_addr + 0x38) >> 4 ) & 0x7F;

    return (SYS_CLK * value);
}

static unsigned int pmu_read_pll3out(void)
{
    u32 mul, value = 0;

    if (ioread32(pmu_base_addr + 0x28) & (1 << 15)) {
        printk("PLL3 not support this mode\n");
    } else {
  	    mul = (ioread32(pmu_base_addr + 0x34) >> 4) & 0x7F;
  	    value = (SYS_CLK * mul) / 2;
    }

    return value;
}

static unsigned int pmu_read_pll5out(void)
{
    return 100000000;
}

static unsigned int pmu_get_ahb_clk(void)
{
    u32 value = 0;

    value = ioread32(pmu_base_addr + 0x30);
    value = (value >> 17) & 0x3;

    switch(value){
      case 0:
  	    value = (pmu_read_pll1out() * 2) / 5;
  	    break;
      case 1:
  	    value = pmu_read_pll1out() / 3;
  	    break;
      case 2:
  	    value = pmu_read_pll1out() / 4;
  	    break;
      case 3:
        if (pmu_get_version() == PMUVER_A)
            value = pmu_read_pll1out() / 5;
        else
            value = pmu_read_pll4out() / 3;
      	break;
      default:
  	    printk("AHB not support this mode\n");
  	    break;
	}

    return value;
}

static unsigned int pmu_get_axi_clk(void)
{
    u32 value = 0;

    value = ioread32(pmu_base_addr + 0x30);

    if(value & (1 << 19))
  	value = pmu_read_pll1out() / 3;
    else
  	value = (pmu_read_pll1out() * 2) / 5;

    return value;
}

unsigned int pmu_get_apb0_clk(void)
{
    return pmu_get_axi_clk() / 8;
}

unsigned int pmu_get_apb1_clk(void)
{
    return pmu_get_axi_clk() / 2;
}

unsigned int pmu_get_apb2_clk(void)
{
    return pmu_get_ahb_clk() / 4;
}

static unsigned int pmu_get_cpu_clk(void)//FA626
{
    u32 value = 0;

    value = pmu_read_pll1out() * 2 / 3;

    return value;
}

static unsigned int pmu_get_sys_clk(void)
{
    return 30*1000000;  //30Mhz
}

static unsigned int pmu_get_ep_cnt(void)
{
    u32 value;

    value = (ftpmu010_read_reg(0xBC) >> 24) & 0xFF;

    if (value > 1)
        value = 0;  /* uninit value */

    return value;
}

struct clock_s
{
    attrInfo_t   clock;
    u32         (*clock_fun)(void);
} clock_info[] = {
    {{"aclk",   ATTR_TYPE_AXI,    0}, pmu_get_axi_clk},
    {{"hclk",   ATTR_TYPE_AHB,    0}, pmu_get_ahb_clk},
    {{"pclk0",  ATTR_TYPE_APB0,   0}, pmu_get_apb0_clk},
    {{"pclk1",  ATTR_TYPE_APB1,   0}, pmu_get_apb1_clk},
    {{"pclk2",  ATTR_TYPE_APB2,   0}, pmu_get_apb2_clk},
    {{"pll1",   ATTR_TYPE_PLL1,   0}, pmu_read_pll1out},
    {{"pll3",   ATTR_TYPE_PLL3,   0}, pmu_read_pll3out},
    {{"pll4",   ATTR_TYPE_PLL4,   0}, pmu_read_pll4out},
    {{"pll5",   ATTR_TYPE_PLL5,   0}, pmu_read_pll5out},
    {{"cpuclk", ATTR_TYPE_CPU,    0}, pmu_get_cpu_clk},
    {{"pmuver", ATTR_TYPE_PMUVER, 0}, pmu_get_version},
    {{"chipver",   ATTR_TYPE_CHIPVER, 0}, pmu_get_chipversion},
    {{"sysclk",    ATTR_TYPE_SYSCLK,  0}, pmu_get_sys_clk},
    {{"pci_epcnt", ATTR_TYPE_EPCNT,   0}, pmu_get_ep_cnt},
};

/* this function is callback from ftpmu010.c */
static int pmu_ctrl_handler(u32 cmd, u32 data1, u32 data2)
{
    ATTR_TYPE_T attr = (ATTR_TYPE_T)data1;
    u32 irq = data1 - CPU_INT_BASE, tmp;
    int ret = -1;

    switch (cmd) {
      case FUNC_TYPE_INTR_FIRE:
      case FUNC_TYPE_INTR_CLR:
        if (cpuintr_fd == -1) {
            printk("%s, cpuintr pmu is not registered yet! \n", __func__);
            return -1;
        }
        if (irq > 15)
            panic("%s, invalid irq: %d \n", __func__, data1);

        tmp = (cmd == FUNC_TYPE_INTR_CLR) ? 0x1 << (irq + 16) : 0x1 << irq;
        ftpmu010_write_reg(cpuintr_fd, 0xA8, tmp, 0xFFFFFFFF);
        break;

      case FUNC_TYPE_RELOAD_ATTR:
        /* this attribute exists */
        ret = -1;
        if (ftpmu010_get_attr(attr) == 0)
            break;
        for (tmp = 0; tmp < ARRAY_SIZE(clock_info); tmp ++) {
            if (clock_info[tmp].clock.attr_type != attr)
                continue;

            ret = 0;
            if (clock_info[tmp].clock_fun) {
                clock_info[tmp].clock.value = clock_info[tmp].clock_fun();
                ftpmu010_deregister_attr(&clock_info[tmp].clock);
                ret = ftpmu010_register_attr(&clock_info[tmp].clock);
                break;
            }
        }
        break;

      default:
        panic("%s, command 0x%x is unrecognized! \n", __func__, cmd);
        break;
    }

    return ret;
}

static int __init pmu_postinit(void)
{
    int i;

    printk("PMU: Mapped at 0x%x \n", (unsigned int)pmu_base_addr);

    /* calls init function */
    ftpmu010_init(pmu_base_addr, &gate_tbl[0], pmu_ctrl_handler);

    /* register clock */
    for (i = 0; i < ARRAY_SIZE(clock_info); i ++)
    {
        if (clock_info[i].clock_fun)
            clock_info[i].clock.value = clock_info[i].clock_fun();

        ftpmu010_register_attr(&clock_info[i].clock);
    }

    /* register I2C to pmu core */
    i2c_fd = ftpmu010_register_reg(&i2c_clk_info);
    if (unlikely(i2c_fd < 0)){
        printk("I2C registers to PMU fail! \n");
    }
#ifdef CONFIG_GPIO_FTGPIO010
    /* register GPIO to pmu core */
    gpio_fd = ftpmu010_register_reg(&gpio_clk_info);
    if (unlikely(gpio_fd < 0)){
        printk("GPIO registers to PMU fail! \n");
    }
#endif
    /* register DMAC to pmu core */
    dmac_fd = ftpmu010_register_reg(&dmac_clk_info);
    if (unlikely(dmac_fd < 0)){
        printk("AHB DMAC registers to PMU fail! \n");
    }

#ifdef CONFIG_PLATFORM_AXIDMA
    /* register AXI DMAC to pmu core */
    xdmac_fd = ftpmu010_register_reg(&xdmac_clk_info);
    if (unlikely(xdmac_fd < 0)){
        printk("AXI DMAC registers to PMU fail! \n");
    }
#endif

    /* cpu interrupt */
    cpuintr_fd = ftpmu010_register_reg(&cpu_intr_info);
    if (unlikely(cpuintr_fd < 0)){
        printk("CPU INTR registers to PMU fail! \n");
    }

    return 0;
}

arch_initcall(pmu_postinit);

/* this function should be earlier than any function in this file
 */
void __init pmu_earlyinit(void __iomem *base)
{
    pmu_base_addr = base;
}

MODULE_LICENSE("GPL");
MODULE_AUTHOR("GM Technology Corp.");
MODULE_DESCRIPTION("PMU driver");
