/*
 *  arch/arm/mach-GM/include/mach/platform-GM8129/platform_io.h
 *
 *  Faraday GM platform dependent definitions
 *
 *  Copyright (C) 2005 Faraday Corp. (http://www.faraday-tech.com)
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 * ChangeLog
 *  Add IRQ number definition
 *  Add IP module phy address definition
 *
 */
#ifndef __PLATFORM_IO_H__
#define __PLATFORM_IO_H__


#define PLATFORM_FIQ_BASE       0
#define PLATFORM_IRQ_TOTALCOUNT	64/* interrupt controller supports 96 interrupts */
#define PLATFORM_INTERRUPTS     PLATFORM_IRQ_TOTALCOUNT
#define CPU_MEM_PA_BASE         0x0     /* the memory physical start address(DDR) */

/*
 * Component counts
 */

/* PWMTMR */
#define PWMTMR_COUNT	1
#define PWMTMR_FTPWM010_COUNT	1
/* WDT */
#define WDT_COUNT	1
#define WDT_FTWDT010_COUNT	1
/* GPIO */
#define GPIO_COUNT	2
#define GPIO_FTGPIO010_COUNT	2
/* I2C */
#define I2C_COUNT	1
#define I2C_FTI2C010_COUNT	1
/* SSP */
#define SSP_COUNT	2
#define SSP_FTSSP010_COUNT	2
/* SPI020 */
#define SPI_COUNT	1
#define SPI_FTSPI020_COUNT	1
/* SDC */
#define SDC_COUNT	1
#define SDC_FTSDC021_COUNT	1
/* NAND */
#define NAND_COUNT	1
#define NAND_FTNAND024_COUNT	1
/* NANDDP */
#define NANDDP_COUNT	1
#define NANDDP_FTNAND024_COUNT	1
/* USB */
#define USB_COUNT       1
#define USB_FOTG2XX_COUNT       1
/* LCD */
#define LCD_COUNT	1
#define LCD_FTLCDC200_COUNT	1
/* MAC */
#define MAC_COUNT	1
#define MAC_FTGMAC100_COUNT	1
/* TVE */
#define TVE_COUNT	1
#define TVE_FTTVE100_COUNT	1
/* AES */
#define AES_COUNT	1
#define AES_FTAES020_COUNT	1
/* SCAL */
#define SCAL_COUNT	1
#define SCAL_FTSCAL300_COUNT	1
/* CAP */
#define CAP_COUNT	1
#define CAP_FTCAP300_COUNT	1
/* DI3D */
#define DI3D_COUNT	1
#define DI3D_FTDI3D_COUNT	1
/* H264E */
#define H264E_COUNT	1
#define H264E_FTMCP280_COUNT	1
/* MCP */
#define MCP_COUNT	1
#define MCP_FTMCP100_COUNT	1
/* CT656 */
#define CT656_COUNT	1
#define CT656_FTCT656_COUNT	1
/* ISP320 */
#define ISP320_COUNT	1
#define ISP320_FTISP320_COUNT	1

/* THDNR */
#define THDNR_COUNT	1
#define THDNR_FT3DNR_COUNT	1

/* IR_DET */
#define IR_DET_COUNT	1
#define IR_DET_FTIRDET_COUNT	1

/* RTC */
#define RTC_COUNT	1
#define RTC_FTRTC_COUNT	1

/* ADC */
#define ADC_COUNT	1
#define ADC_WRAP_COUNT	1

/* ADDA */
#define ADDA_COUNT	1
#define ADDA_WRAP_COUNT	1

/* DMAC020 */
#define DMAC_FTDMAC020_COUNT 1

/* APBBRG */
#define APBBRG_COUNT	1
#define APBBRG_FTAPBBRG020S_COUNT	1

/* DDRC */
#define DDRC_COUNT	1
#define DDRC_FTDDRC010_COUNT	1
/*
 * Interrrupt numbers
 */
/* PWMTMR */
#define PWMTMR_FTPWM010_IRQ_COUNT	1
#define PWMTMR_FTPWM010_IRQ0	49
#define PWMTMR_FTPWM010_0_IRQ0	49

/* WDT */
#define WDT_FTWDT010_IRQ_COUNT	1
#define WDT_FTWDT010_IRQ	16
#define WDT_FTWDT010_0_IRQ	16

/* GPIO */
#define GPIO_FTGPIO010_IRQ_COUNT	1
#define GPIO_FTGPIO010_IRQ	13
#define GPIO_FTGPIO010_0_IRQ	13
#define GPIO_FTGPIO010_1_IRQ	63

/* I2C */
#define I2C_FTI2C010_IRQ_COUNT	1
#define I2C_FTI2C010_IRQ	18
#define I2C_FTI2C010_0_IRQ	18

/* SSP */
#define SSP_FTSSP010_IRQ_COUNT	1
#define SSP_FTSSP010_IRQ	6
#define SSP_FTSSP010_0_IRQ	6
#define SSP_FTSSP010_1_IRQ	11

/* SPI */
#define SPI_FTSPI020_IRQ_COUNT	1
#define SPI_FTSPI020_IRQ	54
#define SPI_FTSPI020_0_IRQ	54

/* SDC */
#define SDC_FTSDC021_IRQ_COUNT	1
#define SDC_FTSDC021_IRQ	15
#define SDC_FTSDC021_0_IRQ	15

/* NAND */
#define NAND_FTNAND024_IRQ_COUNT	1
#define NAND_FTNAND024_IRQ	23
#define NAND_FTNAND024_0_IRQ	23

/* USB */
#define USB_FOTG2XX_IRQ_COUNT	1
#define USB_FOTG2XX_IRQ		9
#define USB_FOTG2XX_0_IRQ	9

/* LCD */
#define LCD_FTLCDC200_IRQ_COUNT	1
#define LCD_FTLCDC200_IRQ	24
#define LCD_FTLCDC200_0_IRQ	24

/* MAC */
#define MAC_FTGMAC100_IRQ_COUNT	1
#define MAC_FTGMAC100_IRQ	3
#define MAC_FTGMAC100_0_IRQ	3

/* AES */
#define AES_FTAES020_IRQ_COUNT	1
#define AES_FTAES020_IRQ	19
#define AES_FTAES020_0_IRQ	19

/* SCAL */
#define SCAL_FTSCAL300_IRQ_COUNT    1
#define SCAL_FTSCAL300_IRQ  12
#define SCAL_FTSCAL300_0_IRQ    12

/* CAP */
#define CAP_FTCAP300_IRQ_COUNT	1
#define CAP_FTCAP300_IRQ	32
#define CAP_FTCAP300_0_IRQ	32

/* DI3D */
#define DI3D_FTDI3D_IRQ_COUNT	1
#define DI3D_FTDI3D_IRQ	41
#define DI3D_FTDI3D_0_IRQ	41

/* H264E */
#define H264E_FTMCP280_IRQ_COUNT	1
#define H264E_FTMCP280_IRQ	29
#define H264E_FTMCP280_0_IRQ	29

/* MCP */
#define MCP_FTMCP100_IRQ_COUNT	1
#define MCP_FTMCP100_IRQ	31
#define MCP_FTMCP100_0_IRQ	31

/* ISP320 */
#define ISP320_FTISP320_IRQ_COUNT	1
#define ISP320_FTISP320_IRQ0	43
#define ISP320_FTISP320_0_IRQ0	43

/* MIPI */
#define MIPI_FTCSIRX100_IRQ_COUNT	1
#define MIPI_FTCSIRX100_IRQ0	52
#define MIPI_FTCSIRX100_0_IRQ0	52

/* HiSPi */
#define HISPI_FTHISPI_IRQ_COUNT	1
#define HISPI_FTHISPI_IRQ0	45
#define HISPI_FTHISPI_0_IRQ0	45

/* LVDS */
#define LVDS_FTLVDS_IRQ_COUNT	1
#define LVDS_FTLVDS_IRQ0	46
#define LVDS_FTLVDS_0_IRQ0	46

/* THDNR */
#define THDNR_FT3DNR_IRQ_COUNT 1
#define THDNR_FT3DNR_IRQ 42
#define THDNR_FT3DNR_0_IRQ 42

/* IR_DET */
#define IR_DET_FTIRDET_IRQ_COUNT	1
#define IR_DET_FTIRDET_IRQ	48
#define IR_DET_FTIRDET_0_IRQ	48

/* RTC */
#define RTC_FTRTC_IRQ_COUNT     2
#define RTC_FTRTC_IRQ           50
#define RTC_FTRTC_0_IRQ         50      ///< RTC_INT
#define RTC_FTRTC_0_ALM_IRQ     51      ///< RTC_ALARM

/* ADC */
#define ADC_WRAP_IRQ_COUNT	1
#define ADC_WRAP_IRQ	35
#define ADC_WRAP_0_IRQ	35

/* DMAC020 */
#define DMAC_FTDMAC020_IRQ_COUNT    1
#define DMAC_FTDMAC020_IRQ  1
#define DMAC_FTDMAC020_0_IRQ		1

/* APBBRG */
#define APBBRG_FTAPBBRG020S_IRQ_COUNT	1
#define APBBRG_FTAPBBRG020S_IRQ		2

/*Think2d*/
/* 2D GRAPHIC */
#define GRA_FT2DGRA_IRQ_COUNT	1
#define GRA_FT2DGRA_IRQ	4
#define GRA_FT2DGRA_0_IRQ	4

/* pMonitor */
#define PMONITOR_IRQ_COUNT	1
#define PMONITOR_IRQ		44

/*
 * Base addresses
 */

/* PWMTMR */
#define PWMTMR_FTPWM010_PA_COUNT	1
#define PWMTMR_FTPWM010_PA_BASE	    0x91B00000
#define PWMTMR_FTPWM010_PA_LIMIT	0x91B0FFFF
#define PWMTMR_FTPWM010_PA_SIZE	    0x00010000
#define PWMTMR_FTPWM010_0_PA_BASE	0x91B00000
#define PWMTMR_FTPWM010_0_PA_LIMIT	0x91B0FFFF
#define PWMTMR_FTPWM010_0_PA_SIZE	0x00010000

/* WDT */
#define WDT_FTWDT010_PA_COUNT	1
#define WDT_FTWDT010_PA_BASE	0x90E00000
#define WDT_FTWDT010_PA_LIMIT	0x90E00FFF
#define WDT_FTWDT010_PA_SIZE	0x00001000
#define WDT_FTWDT010_0_PA_BASE	0x90E00000
#define WDT_FTWDT010_0_PA_LIMIT	0x90E00FFF
#define WDT_FTWDT010_0_PA_SIZE	0x00001000

/* GPIO */
#define GPIO_FTGPIO010_PA_COUNT	1
#define GPIO_FTGPIO010_PA_BASE	0x91000000
#define GPIO_FTGPIO010_PA_LIMIT	0x91000FFF
#define GPIO_FTGPIO010_PA_SIZE	0x00001000
#define GPIO_FTGPIO010_0_PA_BASE	0x91000000
#define GPIO_FTGPIO010_0_PA_LIMIT	0x91000FFF
#define GPIO_FTGPIO010_0_PA_SIZE	0x00001000
#define GPIO_FTGPIO010_1_PA_BASE	0x91900000
#define GPIO_FTGPIO010_1_PA_LIMIT	0x91900FFF
#define GPIO_FTGPIO010_1_PA_SIZE	0x00001000

/* I2C */
#define I2C_FTI2C010_PA_COUNT	1
#define I2C_FTI2C010_PA_BASE	0x91200000
#define I2C_FTI2C010_PA_LIMIT	0x91200FFF
#define I2C_FTI2C010_PA_SIZE	0x00001000
#define I2C_FTI2C010_0_PA_BASE	0x91200000
#define I2C_FTI2C010_0_PA_LIMIT	0x91200FFF
#define I2C_FTI2C010_0_PA_SIZE	0x00001000

/* SSP */
#define SSP_FTSSP010_PA_COUNT	1
#define SSP_FTSSP010_PA_BASE	0x91300000
#define SSP_FTSSP010_PA_LIMIT	0x91300FFF
#define SSP_FTSSP010_PA_SIZE	0x00001000
#define SSP_FTSSP010_0_PA_BASE	0x91300000
#define SSP_FTSSP010_0_PA_LIMIT	0x91300FFF
#define SSP_FTSSP010_0_PA_SIZE	0x00001000
#define SSP_FTSSP010_1_PA_BASE	0x91400000
#define SSP_FTSSP010_1_PA_LIMIT	0x91400FFF
#define SSP_FTSSP010_1_PA_SIZE	0x00001000

/* SPI */
#define SPI_FTSPI020_PA_COUNT	1
#define SPI_FTSPI020_PA_BASE	0x92300000
#define SPI_FTSPI020_PA_LIMIT	0x92300FFF
#define SPI_FTSPI020_PA_SIZE	0x00001000
#define SPI_FTSPI020_0_PA_BASE	0x92300000
#define SPI_FTSPI020_0_PA_LIMIT	0x92300FFF
#define SPI_FTSPI020_0_PA_SIZE	0x00001000

/* SDC */
#define SDC_FTSDC021_PA_COUNT	1
#define SDC_FTSDC021_PA_BASE	0x92800000
#define SDC_FTSDC021_PA_LIMIT	0x92800FFF
#define SDC_FTSDC021_PA_SIZE	0x00001000
#define SDC_FTSDC021_0_PA_BASE	0x92800000
#define SDC_FTSDC021_0_PA_LIMIT	0x92800FFF
#define SDC_FTSDC021_0_PA_SIZE	0x00001000

/* NAND */
#define NAND_FTNAND024_PA_COUNT	1
#define NAND_FTNAND024_PA_BASE	0x93700000
#define NAND_FTNAND024_PA_LIMIT	0x937FFFFF
#define NAND_FTNAND024_PA_SIZE	0x00100000
#define NAND_FTNAND024_0_PA_BASE	0x93700000
#define NAND_FTNAND024_0_PA_LIMIT	0x937FFFFF
#define NAND_FTNAND024_0_PA_SIZE	0x00100000

/* NAND Data Port */
#define NANDDP_FTNAND024_PA_COUNT	1
#define NANDDP_FTNAND024_PA_BASE	0x93800000
#define NANDDP_FTNAND024_PA_LIMIT	0x938FFFFF
#define NANDDP_FTNAND024_PA_SIZE	0x00100000
#define NANDDP_FTNAND024_0_PA_BASE	0x93800000
#define NANDDP_FTNAND024_0_PA_LIMIT	0x938FFFFF
#define NANDDP_FTNAND024_0_PA_SIZE	0x00100000

/* USB */
#define USB_FOTG2XX_PA_COUNT	1
#define USB_FOTG2XX_PA_BASE	0x93000000
#define USB_FOTG2XX_PA_LIMIT	0x93000FFF
#define USB_FOTG2XX_PA_SIZE	0x00001000
#define USB_FOTG2XX_0_PA_BASE	0x93000000
#define USB_FOTG2XX_0_PA_LIMIT	0x93000FFF
#define USB_FOTG2XX_0_PA_SIZE	0x00001000

/* LCD */
#define LCD_FTLCDC200_PA_COUNT	1
#define LCD_FTLCDC200_PA_BASE	0x9BF00000
#define LCD_FTLCDC200_PA_LIMIT	0x9BF0CFFF
#define LCD_FTLCDC200_PA_SIZE	0x0000D000
#define LCD_FTLCDC200_0_PA_BASE	0x9BF00000
#define LCD_FTLCDC200_0_PA_LIMIT	0x9BF0CFFF
#define LCD_FTLCDC200_0_PA_SIZE	0x0000D000

/* MAC */
#define MAC_FTGMAC100_PA_COUNT	1
#define MAC_FTGMAC100_PA_BASE	0x92500000
#define MAC_FTGMAC100_PA_LIMIT	0x92500FFF
#define MAC_FTGMAC100_PA_SIZE	0x00001000
#define MAC_FTGMAC100_0_PA_BASE	0x92500000
#define MAC_FTGMAC100_0_PA_LIMIT	0x92500FFF
#define MAC_FTGMAC100_0_PA_SIZE	0x00001000

/* TVE */
#define TVE_FTTVE100_PA_COUNT	1
#define TVE_FTTVE100_PA_BASE	0x93500000
#define TVE_FTTVE100_PA_LIMIT	0x93500FFF
#define TVE_FTTVE100_PA_SIZE	0x00001000
#define TVE_FTTVE100_0_PA_BASE	0x93500000
#define TVE_FTTVE100_0_PA_LIMIT	0x93500FFF
#define TVE_FTTVE100_0_PA_SIZE	0x00001000

/* AES */
#define AES_FTAES020_PA_COUNT	1
#define AES_FTAES020_PA_BASE	0x92700000
#define AES_FTAES020_PA_LIMIT	0x92700FFF
#define AES_FTAES020_PA_SIZE	0x00001000
#define AES_FTAES020_0_PA_BASE	0x92700000
#define AES_FTAES020_0_PA_LIMIT	0x92700FFF
#define AES_FTAES020_0_PA_SIZE	0x00001000

/* SCAL */
#define SCAL_FTSCAL300_PA_COUNT 1
#define SCAL_FTSCAL300_PA_BASE  0x96200000
#define SCAL_FTSCAL300_PA_LIMIT 0x96247FFF
#define SCAL_FTSCAL300_PA_SIZE  0x00048000
#define SCAL_FTSCAL300_0_PA_BASE    0x96200000
#define SCAL_FTSCAL300_0_PA_LIMIT   0x96247FFF
#define SCAL_FTSCAL300_0_PA_SIZE    0x00048000

/* CAP */
#define CAP_FTCAP300_PA_COUNT	1
#define CAP_FTCAP300_PA_BASE	0x96100000
#define CAP_FTCAP300_PA_LIMIT	0x96100FFF
#define CAP_FTCAP300_PA_SIZE	0x00001000
#define CAP_FTCAP300_0_PA_BASE	0x96100000
#define CAP_FTCAP300_0_PA_LIMIT	0x96100FFF
#define CAP_FTCAP300_0_PA_SIZE	0x00001000

/* DI3D */
#define DI3D_FTDI3D_PA_COUNT	1
#define DI3D_FTDI3D_PA_BASE	    0x9B000000
#define DI3D_FTDI3D_PA_LIMIT	0x9B000FFF
#define DI3D_FTDI3D_PA_SIZE	    0x00001000
#define DI3D_FTDI3D_0_PA_BASE	0x9B000000
#define DI3D_FTDI3D_0_PA_LIMIT	0x9B000FFF
#define DI3D_FTDI3D_0_PA_SIZE	0x00001000

/* H264E */
#define H264E_FTMCP280_PA_COUNT	1
#define H264E_FTMCP280_PA_BASE	0x92C00000
#define H264E_FTMCP280_PA_LIMIT	0x92C00FFF
#define H264E_FTMCP280_PA_SIZE	0x00001000
#define H264E_FTMCP280_0_PA_BASE	0x92C00000
#define H264E_FTMCP280_0_PA_LIMIT	0x92C00FFF
#define H264E_FTMCP280_0_PA_SIZE	0x00001000

/* MCP */
#define MCP_FTMCP100_PA_COUNT	1
#define MCP_FTMCP100_PA_BASE	0x92000000
#define MCP_FTMCP100_PA_LIMIT	0x920FFFFF
#define MCP_FTMCP100_PA_SIZE	0x00100000
#define MCP_FTMCP100_0_PA_BASE	0x92000000
#define MCP_FTMCP100_0_PA_LIMIT	0x920FFFFF
#define MCP_FTMCP100_0_PA_SIZE	0x00100000

/* CT656 */
#define CT656_FTCT656_PA_COUNT	1
#define CT656_FTCT656_PA_BASE	0x92A00000
#define CT656_FTCT656_PA_LIMIT	0x92A00FFF
#define CT656_FTCT656_PA_SIZE	0x00001000
#define CT656_FTCT656_0_PA_BASE	0x92A00000
#define CT656_FTCT656_0_PA_LIMIT	0x92A00FFF
#define CT656_FTCT656_0_PA_SIZE	0x00001000

/* ISP320 */
#define ISP320_FTISP320_PA_COUNT	1
#define ISP320_FTISP320_PA_BASE		0x93930000
#define ISP320_FTISP320_PA_LIMIT	0x93932FFF
#define ISP320_FTISP320_PA_SIZE		0x00003000
#define ISP320_FTISP320_0_PA_BASE	0x93930000
#define ISP320_FTISP320_0_PA_LIMIT	0x93932FFF
#define ISP320_FTISP320_0_PA_SIZE	0x00003000

/* MIPI */
#define MIPI_FTCSIRX100_PA_COUNT	1
#define MIPI_FTCSIRX100_PA_BASE		0x9ba00000
#define MIPI_FTCSIRX100_PA_LIMIT	0x9ba00FFF
#define MIPI_FTCSIRX100_PA_SIZE		0x00001000
#define MIPI_FTCSIRX100_0_PA_BASE	0x9ba00000
#define MIPI_FTCSIRX100_0_PA_LIMIT	0x9ba00FFF
#define MIPI_FTCSIRX100_0_PA_SIZE	0x00001000

/* HiSPi */
#define HISPI_FTHISPI_PA_COUNT		1
#define HISPI_FTHISPI_PA_BASE		0x9bb00000
#define HISPI_FTHISPI_PA_LIMIT		0x9bb00FFF
#define HISPI_FTHISPI_PA_SIZE		0x00001000
#define HISPI_FTHISPI_0_PA_BASE		0x9bb00000
#define HISPI_FTHISPI_0_PA_LIMIT	0x9bb00FFF
#define HISPI_FTHISPI_0_PA_SIZE		0x00001000

/* LVDS */
#define LVDS_FTLVDS_PA_COUNT	1
#define LVDS_FTLVDS_PA_BASE		0x9bc00000
#define LVDS_FTLVDS_PA_LIMIT	0x9bc00FFF
#define LVDS_FTLVDS_PA_SIZE		0x00001000
#define LVDS_FTLVDS_0_PA_BASE	0x9bc00000
#define LVDS_FTLVDS_0_PA_LIMIT	0x9bc00FFF
#define LVDS_FTLVDS_0_PA_SIZE	0x00001000

/* THDNR */
#define THDNR_FT3DNR_PA_COUNT   1
#define THDNR_FT3DNR_PA_BASE    0x9b700000
#define THDNR_FT3DNR_PA_LIMIT   0x9b7007FF
#define THDNR_FT3DNR_PA_SIZE    0x00000800
#define THDNR_FT3DNR_0_PA_BASE  0x9b700000
#define THDNR_FT3DNR_0_PA_LIMIT 0x9b7007FF
#define THDNR_FT3DNR_0_PA_SIZE  0x00000800

/* IR_DET */
#define IR_DET_FTIRDET_PA_COUNT	1
#define IR_DET_FTIRDET_PA_BASE	0x91600000
#define IR_DET_FTIRDET_PA_LIMIT	0x91600FFF
#define IR_DET_FTIRDET_PA_SIZE	0x00001000
#define IR_DET_FTIRDET_0_PA_BASE	0x91600000
#define IR_DET_FTIRDET_0_PA_LIMIT	0x91600FFF
#define IR_DET_FTIRDET_0_PA_SIZE	0x00001000

/* RTC */
#define RTC_FTRTC_PA_COUNT      1
#define RTC_FTRTC_PA_BASE       0x91C00000
#define RTC_FTRTC_PA_LIMIT      0x91C00FFF
#define RTC_FTRTC_PA_SIZE       0x00001000
#define RTC_FTRTC_0_PA_BASE     0x91C00000
#define RTC_FTRTC_0_PA_LIMIT    0x91C00FFF
#define RTC_FTRTC_0_PA_SIZE     0x00001000

/* ADC */
#define ADC_WRAP_PA_COUNT	1
#define ADC_WRAP_PA_BASE	0x90A00000
#define ADC_WRAP_PA_LIMIT	0x90A00FFF
#define ADC_WRAP_PA_SIZE	0x00001000
#define ADC_WRAP_0_PA_BASE	0x90A00000
#define ADC_WRAP_0_PA_LIMIT	0x90A00FFF
#define ADC_WRAP_0_PA_SIZE	0x00001000

/* ADDA */
#define ADDA_WRAP_PA_COUNT	1
#define ADDA_WRAP_PA_BASE	0x90B00000
#define ADDA_WRAP_PA_LIMIT	0x90B00FFF
#define ADDA_WRAP_PA_SIZE	0x00001000
#define ADDA_WRAP_0_PA_BASE	0x90B00000
#define ADDA_WRAP_0_PA_LIMIT	0x90B00FFF
#define ADDA_WRAP_0_PA_SIZE	0x00001000

/* DMAC020 */
#define DMAC_FTDMAC020_PA_COUNT 1
#define DMAC_FTDMAC020_PA_BASE  0x92600000
#define DMAC_FTDMAC020_PA_LIMIT 0x92600FFF
#define DMAC_FTDMAC020_PA_SIZE  0x0001000
#define DMAC_FTDMAC020_0_PA_BASE	0x92600000
#define DMAC_FTDMAC020_0_PA_LIMIT	0x92600FFF
#define DMAC_FTDMAC020_0_PA_SIZE	0x00001000

/* APBBRG */
#define APBBRG_FTAPBBRG020S_PA_COUNT	1
#define APBBRG_FTAPBBRG020S_PA_BASE	0x90000000
#define APBBRG_FTAPBBRG020S_PA_LIMIT	0x900FFFFF
#define APBBRG_FTAPBBRG020S_PA_SIZE	0x00100000
#define APBBRG_FTAPBBRG020S_0_PA_BASE	0x90000000
#define APBBRG_FTAPBBRG020S_0_PA_LIMIT	0x900FFFFF
#define APBBRG_FTAPBBRG020S_0_PA_SIZE	0x00100000

/* DDRC */
#define DDRC_FTDDRC010_PA_COUNT	1
#define DDRC_FTDDRC010_PA_BASE	0x9A100000
#define DDRC_FTDDRC010_PA_LIMIT	0x9A100FFF
#define DDRC_FTDDRC010_PA_SIZE	0x00001000

/*THINK 2D*/
#define GRA_FT2DGRA_PA_BASE     0x92200000
#define GRA_FT2DGRA_PA_LIMIT    0x92200FFF
#define GRA_FT2DGRA_PA_SIZE     0x00001000

/* GPENC */
#define GRAPHIC_ENC_PA_BASE     0x9B200000
#define GRAPHIC_ENC_PA_LIMIT    0x9B200FFF
#define GRAPHIC_ENC_PA_SIZE     0x00001000

/* GPDEC */
#define GRAPHIC_DEC_PA_BASE     0x9B300000
#define GRAPHIC_DEC_PA_LIMIT    0x9B300FFF
#define GRAPHIC_DEC_PA_SIZE     0x00001000
#define GRAPHIC_DEC_0_PA_BASE   0x9B300000
#define GRAPHIC_DEC_0_PA_LIMIT  0x9B300FFF
#define GRAPHIC_DEC_0_PA_SIZE   0x00001000

#define PMONITOR_PA_BASE	0x91D00000
#define PMONITOR_PA_LIMIT	0x91D00FFF
#define PMONITOR_PA_SIZE	0x00001000

/*
 * IRQ/FIQ trigger level and trigger mode
 */
#define PLATFORM_IRQ_TRIGGER_MODE1	0x00000000
#define PLATFORM_IRQ_TRIGGER_LEVEL1	0xFFFFFFFF
#define PLATFORM_FIQ_TRIGGER_MODE1	0x00000000
#define PLATFORM_FIQ_TRIGGER_LEVEL1	0xFFFFFFFF

#define PLATFORM_IRQ_TRIGGER_MODE2	0x00000000
#define PLATFORM_IRQ_TRIGGER_LEVEL2	0xFFFFFFFF
#define PLATFORM_FIQ_TRIGGER_MODE2	0x00000000
#define PLATFORM_FIQ_TRIGGER_LEVEL2	0xFFFFFFFF

#define PLATFORM_IRQ_TRIGGER_MODE3	0x00000000
#define PLATFORM_IRQ_TRIGGER_LEVEL3	0xFFFFFFFF
#define PLATFORM_FIQ_TRIGGER_MODE3	0x00000000
#define PLATFORM_FIQ_TRIGGER_LEVEL3	0xFFFFFFFF

#define PLATFORM_IRQ_TRIGGER_MODE4	0x00000000
#define PLATFORM_IRQ_TRIGGER_LEVEL4	0xFFFFFFFF
#define PLATFORM_FIQ_TRIGGER_MODE4	0x00000000
#define PLATFORM_FIQ_TRIGGER_LEVEL4	0xFFFFFFFF

#define PLATFORM_IRQ_TRIGGER_MODE5	0x00000000
#define PLATFORM_IRQ_TRIGGER_LEVEL5	0xFFFFFFFF
#define PLATFORM_FIQ_TRIGGER_MODE5	0x00000000
#define PLATFORM_FIQ_TRIGGER_LEVEL5	0xFFFFFFFF

#define PLATFORM_IRQ_TRIGGER_MODE6	0x00000000
#define PLATFORM_IRQ_TRIGGER_LEVEL6	0xFFFFFFFF
#define PLATFORM_FIQ_TRIGGER_MODE6	0x00000000
#define PLATFORM_FIQ_TRIGGER_LEVEL6	0xFFFFFFFF

#define PLATFORM_IRQ_TRIGGER_MODE7	0x00000000
#define PLATFORM_IRQ_TRIGGER_LEVEL7	0xFFFFFFFF
#define PLATFORM_FIQ_TRIGGER_MODE7	0x00000000
#define PLATFORM_FIQ_TRIGGER_LEVEL7	0xFFFFFFFF

#define PLATFORM_IRQ_TRIGGER_MODE8	0x00000000
#define PLATFORM_IRQ_TRIGGER_LEVEL8	0xFFFFFFFF
#define PLATFORM_FIQ_TRIGGER_MODE8	0x00000000
#define PLATFORM_FIQ_TRIGGER_LEVEL8	0xFFFFFFFF

#endif /* __PLATFORM_IO_H__ */
