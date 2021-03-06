/*
 *  arch/arm/mach-GM-Duo/include/mach/platform/platform_io.h
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
#define PLATFORM_IRQ_TOTALCOUNT		96/* interrupt controller supports 96 interrupts */
#define PLATFORM_GM8312_IRQ_TOTALCOUNT 	32
#define PLATFORM_GM8312_IRQ_BASE      	PLATFORM_IRQ_TOTALCOUNT
#define PLATFORM_INTERRUPTS     (PLATFORM_IRQ_TOTALCOUNT + PLATFORM_GM8312_IRQ_TOTALCOUNT)

/*
 * Component counts
 */

/* WDT */
#define WDT_COUNT	1
#define WDT_FTWDT010_COUNT	1
/* GPIO */
#define GPIO_COUNT	2
#define GPIO_FTGPIO010_COUNT	2
/* I2C */
#define I2C_COUNT	6
#define I2C_FTI2C010_COUNT	6
/* SSP */
#define SSP_COUNT	6
#define SSP_FTSSP010_COUNT	6
/* SPI020 */
#define SPI_COUNT	1
#define SPI_FTSPI020_COUNT	1
/* SDC */
#define SDC_COUNT	1
#define SDC_FTSDC021_COUNT	1
/* NAND */
#define NAND_COUNT	1
#define NAND_FTNAND023_COUNT	1
/* NANDDP */
#define NANDDP_COUNT	1
#define NANDDP_FTNAND023_COUNT	1
/* LCD */
#define LCD_COUNT	3
#define LCD_FTLCDC200_COUNT	3
/* SMC */
#define SMC_COUNT	1
#define SMC_FTSMC010_COUNT	1
/* 2D GRAPHIC */
#define GRA_COUNT	1
#define GRA_FT2DGRA_COUNT	1
/* MAC */
#define MAC_COUNT	2
#define MAC_FTGMAC100_COUNT	2
/* AES */
#define AES_COUNT	1
#define AES_FTAES020_COUNT	1
/* CAP */
#define CAP_COUNT	1
#define CAP_FTCAP300_COUNT	2
/* DI3D */
#define DI3D_COUNT	2
#define DI3D_FTDI3D_COUNT	2
/* H264E */
#define H264E_COUNT	2
#define H264E_FTMCP280_COUNT	2
/* H264D */
#define H264D_COUNT	2
#define H264D_FTMCP300_COUNT	2
/* MCP */
#define MCP_COUNT	1
#define MCP_FTMCP100_COUNT	1
/* IR_DET */
#define IR_DET_COUNT	1
#define IR_DET_FTIRDET_COUNT	1
/* KPD */
#define KPD_COUNT	1
#define KPD_FTKPD_COUNT	1
/* PCIE */
#define PCIE_COUNT	2
#define PCIE_FTPCI100_COUNT	2
/* SATA */
#define SATA_COUNT	4
#define SATA_FTSATA100_COUNT	4
/* OTG */
#define OTG_COUNT	3
#define USB_FOTG2XX_COUNT	3
/* TVE */
#define TVE_COUNT	1
#define TVE_FTTVE100_COUNT	1
/* HDMI */
#define HDMI_COUNT	1
#define HDMI_FTHDMI_COUNT	1
/* AHBC */
#define AHBC_COUNT	1
#define AHBC_FTAHBC020_COUNT	1
/* APBB */
#define APBB_COUNT	3
#define APBB_FTAPBB020_COUNT	3
/* DMAC */
#define DMAC_COUNT	2
#define DMAC_FTDMAC020_COUNT	2
/* XDMAC */
#define XDMAC_COUNT	1
#define XDMAC_FTDMAC030_COUNT	1
/* I2S_PCIE */
#define I2S_PCIE_COUNT	2
#define I2S_PCIE_FTSSP010_COUNT	2
/* I2C_PCIE */
#define I2C_PCIE_COUNT	4
#define I2C_PCIE_FTSSP010_COUNT	4
/* SCAL */
#define SCAL_COUNT  2
#define SCAL_FTSCAL300_COUNT    2
/* DMAC_PCIE */
#define DMAC_PCIE_COUNT	1
#define DMAC_PCIE_FTDMAC020_COUNT	1

/*
 * Interrrupt numbers
 */
/* DDR IRQ */
#define DDRC_IRQ_COUNT  2
#define DDRC0_IRQ       26
#define DDRC1_IRQ       27

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
#define I2C_FTI2C010_1_IRQ	53
#define I2C_FTI2C010_2_IRQ	50
#define I2C_FTI2C010_3_IRQ	51
#define I2C_FTI2C010_4_IRQ	52
#define I2C_FTI2C010_5_IRQ	43

/* SSP */
#define SSP_FTSSP010_IRQ_COUNT	1
#define SSP_FTSSP010_IRQ	6
#define SSP_FTSSP010_0_IRQ	6
#define SSP_FTSSP010_1_IRQ	11
#define SSP_FTSSP010_2_IRQ	7
#define SSP_FTSSP010_3_IRQ	54
#define SSP_FTSSP010_4_IRQ	74
#define SSP_FTSSP010_5_IRQ	75

/* SSP for PCIE */
#define SSP_FTSSP010_6_IRQ  I2S_PCIE_FTSSP010_0_IRQ
#define SSP_FTSSP010_7_IRQ	I2S_PCIE_FTSSP010_1_IRQ

/* SPI */
#define SPI_FTSPI020_IRQ_COUNT	1
#define SPI_FTSPI020_IRQ	92
#define SPI_FTSPI020_0_IRQ	92

/* SDC */
#define SDC_FTSDC021_IRQ_COUNT	1
#define SDC_FTSDC021_IRQ	15
#define SDC_FTSDC021_0_IRQ	15

/* NAND */
#define NAND_FTNAND023_IRQ_COUNT	1
#define NAND_FTNAND023_IRQ	23
#define NAND_FTNAND023_0_IRQ	23

/* LCD */
#define LCD_FTLCDC200_IRQ_COUNT	1
#define LCD_FTLCDC200_IRQ	24
#define LCD_FTLCDC200_0_IRQ	24
#define LCD_FTLCDC200_1_IRQ	45
#define LCD_FTLCDC200_2_IRQ	46

/* 2D GRAPHIC */
#define GRA_FT2DGRA_IRQ_COUNT	1
#define GRA_FT2DGRA_IRQ	4
#define GRA_FT2DGRA_0_IRQ	4

/* MAC */
#define MAC_FTGMAC100_IRQ_COUNT	1
#define MAC_FTGMAC100_IRQ	3
#define MAC_FTGMAC100_0_IRQ	3
#define MAC_FTGMAC100_1_IRQ	33

/* AES */
#define AES_FTAES020_IRQ_COUNT	1
#define AES_FTAES020_IRQ	19
#define AES_FTAES020_0_IRQ	19

/* CAP */
#define CAP_FTCAP300_IRQ_COUNT	1
#define CAP_FTCAP300_IRQ	32
#define CAP_FTCAP300_0_IRQ	32

/* DI3D */
#define DI3D_FTDI3D_IRQ_COUNT	1
#define DI3D_FTDI3D_IRQ	41
#define DI3D_FTDI3D_0_IRQ	41
#define DI3D_FTDI3D_1_IRQ	42

/* H264E */
#define H264E_FTMCP280_IRQ_COUNT	1
#define H264E_FTMCP280_IRQ	29
#define H264E_FTMCP280_0_IRQ	29
#define H264E_FTMCP280_1_IRQ	28

/* H264D */
#define H264D_FTMCP300_IRQ_COUNT	1
#define H264D_FTMCP300_IRQ	30
#define H264D_FTMCP300_0_IRQ	30
#define H264D_FTMCP300_1_IRQ	40

/* MCP */
#define MCP_FTMCP100_IRQ_COUNT	1
#define MCP_FTMCP100_IRQ	31
#define MCP_FTMCP100_0_IRQ	31

/* XDMAC */
#define XDMAC_FTDMAC030_IRQ_COUNT	1
#define XDMAC_FTDMAC030_IRQ		34
#define XDMAC_FTDMAC030_0_IRQ		34
#define XDMAC_FTDMAC030_0_0_IRQ         61
#define XDMAC_FTDMAC030_0_1_IRQ         62

/* IR_DET */
#define IR_DET_FTIRDET_IRQ_COUNT	1
#define IR_DET_FTIRDET_IRQ	48
#define IR_DET_FTIRDET_0_IRQ	48

/* KPD */
#define KPD_FTKPD_IRQ_COUNT	1
#define KPD_FTKPD_IRQ	49
#define KPD_FTKPD_0_IRQ	49

/* PCIE */
#define PCIE_FTPCI100_IRQ_COUNT	1
#define PCIE_FTPCI100_IRQ	17
#define PCIE_FTPCI100_0_IRQ	17

/* EXT_INT */
#define EXT_INT_IRQ_COUNT	1
#define EXT_INT_IRQ	55
#define EXT_INT_0_IRQ	55

/* SATA */
#define SATA_FTSATA100_IRQ_COUNT	1
#define SATA_FTSATA100_IRQ	(PLATFORM_GM8312_IRQ_BASE + 1)
#define SATA_FTSATA100_0_IRQ	(PLATFORM_GM8312_IRQ_BASE + 1)
#define SATA_FTSATA100_1_IRQ	(PLATFORM_GM8312_IRQ_BASE + 2)
#define SATA_FTSATA100_2_IRQ	(PLATFORM_GM8312_IRQ_BASE + 3)
#define SATA_FTSATA100_3_IRQ	(PLATFORM_GM8312_IRQ_BASE + 4)

/* OTG */
#define USB_FOTG2XX_IRQ_COUNT	3
#define USB_FOTG2XX_IRQ		(PLATFORM_GM8312_IRQ_BASE + 5)
#define USB_FOTG2XX_0_IRQ	(PLATFORM_GM8312_IRQ_BASE + 5)
#define USB_FOTG2XX_1_IRQ	(PLATFORM_GM8312_IRQ_BASE + 6)
#define USB_FOTG2XX_2_IRQ	(PLATFORM_GM8312_IRQ_BASE + 7)

/* HDMI */
#define HDMI_FTHDMI_IRQ_COUNT	1
#define HDMI_FTHDMI_IRQ		(PLATFORM_GM8312_IRQ_BASE + 8)
#define HDMI_FTHDMI_0_IRQ	(PLATFORM_GM8312_IRQ_BASE + 8)

/* DMAC */
#define DMAC_FTDMAC020_IRQ_COUNT	2
#define DMAC_FTDMAC020_IRQ		1
#define DMAC_FTDMAC020_0_IRQ		1
#define DMAC_FTDMAC020_1_IRQ		(PLATFORM_GM8312_IRQ_BASE + 16)

/* APBB */
#define APBB_FTAPBB020_IRQ_COUNT	3
#define APBB_FTAPBB020_IRQ		2
#define APBB_FTAPBB020_0_IRQ		2
#define APBB_FTAPBB020_1_IRQ		5
#define APBB_FTAPBB020_2_IRQ		60

/* I2S_PCIE */
#define I2S_PCIE_FTSSP010_IRQ_COUNT	2
#define I2S_PCIE_FTSSP010_IRQ	(PLATFORM_GM8312_IRQ_BASE + 17)
#define I2S_PCIE_FTSSP010_0_IRQ	(PLATFORM_GM8312_IRQ_BASE + 17)
#define I2S_PCIE_FTSSP010_1_IRQ	(PLATFORM_GM8312_IRQ_BASE + 18)

/* SCAL */
#define SCAL_FTSCAL300_IRQ_COUNT    1
#define SCAL_FTSCAL300_IRQ  12
#define SCAL_FTSCAL300_0_IRQ    12
#define SCAL_FTSCAL300_1_IRQ    44

/*
 * Interrupts among FA726, FA626 and FC7500
 */
#define CPU_INT_BASE        76
#define CPU_INT_0           76  /* cpu_comm */
#define CPU_INT_1           77  /* cpu_comm */
#define CPU_INT_2           78  /* dma channel6 intr */
#define CPU_INT_3           79  /* dma channel7 intr */
#define CPU_INT_4           80  /* dma channel5 intr */
#define CPU_INT_5           81  /* cpu_comm */
#define CPU_INT_6           82  /* dma channel4 intr */
#define CPU_INT_7           83  /* cpu_comm */
#define CPU_INT_8           84  /* cpu_comm */
#define CPU_INT_9           85  /* cpu_comm */
#define CPU_INT_10          86  /* SATA */
#define CPU_INT_11          87  /* SATA */
#define CPU_INT_12          88  /* SATA */
#define CPU_INT_13          89  /* SATA */
#define CPU_INT_14          90  /* audio_comm, 626 <-> 7500 */
#define CPU_INT_15          91  /* audio_comm, 626 <-> 7500 */

/*
 * Base addresses
 */
/* DDRC */
#define DDRC_PA_COUNT           2
#define DDRC_0_PA_BASE          0x99300000
#define DDRC_0_PA_LIMIT         0x99300FFF
#define DDRC_0_PA_SIZE          0x00001000
#define DDRC_1_PA_BASE          0x99700000
#define DDRC_1_PA_LIMIT         0x99700FFF
#define DDRC_1_PA_SIZE          0x00001000

/* WDT */
#define WDT_FTWDT010_PA_COUNT	1
#define WDT_FTWDT010_PA_BASE	0x99200000
#define WDT_FTWDT010_PA_LIMIT	0x99200FFF
#define WDT_FTWDT010_PA_SIZE	0x00001000
#define WDT_FTWDT010_0_PA_BASE	0x99200000
#define WDT_FTWDT010_0_PA_LIMIT	0x99200FFF
#define WDT_FTWDT010_0_PA_SIZE	0x00001000

/* GPIO */
#define GPIO_FTGPIO010_PA_COUNT	1
#define GPIO_FTGPIO010_PA_BASE	0x99400000
#define GPIO_FTGPIO010_PA_LIMIT	0x99400FFF
#define GPIO_FTGPIO010_PA_SIZE	0x00001000
#define GPIO_FTGPIO010_0_PA_BASE	0x99400000
#define GPIO_FTGPIO010_0_PA_LIMIT	0x99400FFF
#define GPIO_FTGPIO010_0_PA_SIZE	0x00001000
#define GPIO_FTGPIO010_1_PA_BASE	0x98E00000
#define GPIO_FTGPIO010_1_PA_LIMIT	0x98E00FFF
#define GPIO_FTGPIO010_1_PA_SIZE	0x00001000

/* I2C */
#define I2C_FTI2C010_PA_COUNT	1
#define I2C_FTI2C010_PA_BASE	0x99600000
#define I2C_FTI2C010_PA_LIMIT	0x99600FFF
#define I2C_FTI2C010_PA_SIZE	0x00001000
#define I2C_FTI2C010_0_PA_BASE	0x99600000
#define I2C_FTI2C010_0_PA_LIMIT	0x99600FFF
#define I2C_FTI2C010_0_PA_SIZE	0x00001000
#define I2C_FTI2C010_1_PA_BASE	0x99800000
#define I2C_FTI2C010_1_PA_LIMIT	0x99800FFF
#define I2C_FTI2C010_1_PA_SIZE	0x00001000
#define I2C_FTI2C010_2_PA_BASE	0x99900000
#define I2C_FTI2C010_2_PA_LIMIT	0x99900FFF
#define I2C_FTI2C010_2_PA_SIZE	0x00001000
#define I2C_FTI2C010_3_PA_BASE	0x99A00000
#define I2C_FTI2C010_3_PA_LIMIT	0x99A00FFF
#define I2C_FTI2C010_3_PA_SIZE	0x00001000
#define I2C_FTI2C010_4_PA_BASE	0x99B00000
#define I2C_FTI2C010_4_PA_LIMIT	0x99B00FFF
#define I2C_FTI2C010_4_PA_SIZE	0x00001000
#define I2C_FTI2C010_5_PA_BASE	0x98c00000
#define I2C_FTI2C010_5_PA_LIMIT	0x98c00FFF
#define I2C_FTI2C010_5_PA_SIZE	0x00001000
/* SSP */
#define SSP_FTSSP010_PA_COUNT	1
#define SSP_FTSSP010_PA_BASE	0x82000000
#define SSP_FTSSP010_PA_LIMIT	0x82000FFF
#define SSP_FTSSP010_PA_SIZE	0x00001000
#define SSP_FTSSP010_0_PA_BASE	0x82000000
#define SSP_FTSSP010_0_PA_LIMIT	0x82000FFF
#define SSP_FTSSP010_0_PA_SIZE	0x00001000
#define SSP_FTSSP010_1_PA_BASE	0x82100000
#define SSP_FTSSP010_1_PA_LIMIT	0x82100FFF
#define SSP_FTSSP010_1_PA_SIZE	0x00001000
#define SSP_FTSSP010_2_PA_BASE	0x82200000
#define SSP_FTSSP010_2_PA_LIMIT	0x82200FFF
#define SSP_FTSSP010_2_PA_SIZE	0x00001000
#define SSP_FTSSP010_3_PA_BASE	0x82300000
#define SSP_FTSSP010_3_PA_LIMIT	0x82300FFF
#define SSP_FTSSP010_3_PA_SIZE	0x00001000
#define SSP_FTSSP010_4_PA_BASE	0x82400000
#define SSP_FTSSP010_4_PA_LIMIT	0x82400FFF
#define SSP_FTSSP010_4_PA_SIZE	0x00001000
#define SSP_FTSSP010_5_PA_BASE	0x82500000
#define SSP_FTSSP010_5_PA_LIMIT	0x82500FFF
#define SSP_FTSSP010_5_PA_SIZE	0x00001000

/* PCIE */
#define SSP_FTSSP010_6_PA_BASE  I2S_PCIE_FTSSP010_0_PA_BASE
#define SSP_FTSSP010_6_PA_LIMIT I2S_PCIE_FTSSP010_0_PA_LIMIT
#define SSP_FTSSP010_6_PA_SIZE  I2S_PCIE_FTSSP010_0_PA_SIZE

#define SSP_FTSSP010_7_PA_BASE  I2S_PCIE_FTSSP010_1_PA_BASE
#define SSP_FTSSP010_7_PA_LIMIT I2S_PCIE_FTSSP010_1_PA_LIMIT
#define SSP_FTSSP010_7_PA_SIZE  I2S_PCIE_FTSSP010_1_PA_SIZE

/* SPI */
#define SPI_FTSPI020_PA_COUNT	1
#define SPI_FTSPI020_PA_BASE	0x80300000
#define SPI_FTSPI020_PA_LIMIT	0x80300FFF
#define SPI_FTSPI020_PA_SIZE	0x00001000
#define SPI_FTSPI020_0_PA_BASE	0x80300000
#define SPI_FTSPI020_0_PA_LIMIT	0x80300FFF
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
#define NAND_FTNAND023_PA_COUNT	1
#define NAND_FTNAND023_PA_BASE	0x80000000
#define NAND_FTNAND023_PA_LIMIT	0x800FFFFF
#define NAND_FTNAND023_PA_SIZE	0x00100000
#define NAND_FTNAND023_0_PA_BASE	0x80000000
#define NAND_FTNAND023_0_PA_LIMIT	0x800FFFFF
#define NAND_FTNAND023_0_PA_SIZE	0x00100000

/* NANDDP */
#define NANDDP_FTNAND023_PA_COUNT	1
#define NANDDP_FTNAND023_PA_BASE	0x80100000
#define NANDDP_FTNAND023_PA_LIMIT	0x801FFFFF
#define NANDDP_FTNAND023_PA_SIZE	0x00100000
#define NANDDP_FTNAND023_0_PA_BASE	0x80100000
#define NANDDP_FTNAND023_0_PA_LIMIT	0x801FFFFF
#define NANDDP_FTNAND023_0_PA_SIZE	0x00100000

/* LCD */
#define LCD_FTLCDC200_PA_COUNT	1
#define LCD_FTLCDC200_PA_BASE	0x9A800000
#define LCD_FTLCDC200_PA_LIMIT	0x9A80CFFF
#define LCD_FTLCDC200_PA_SIZE	0x0000D000
#define LCD_FTLCDC200_0_PA_BASE	0x9A800000
#define LCD_FTLCDC200_0_PA_LIMIT	0x9A80CFFF
#define LCD_FTLCDC200_0_PA_SIZE	0x0000D000
#define LCD_FTLCDC200_1_PA_BASE	0x9B200000
#define LCD_FTLCDC200_1_PA_LIMIT	0x9B20CFFF
#define LCD_FTLCDC200_1_PA_SIZE	0x0000D000
#define LCD_FTLCDC200_2_PA_BASE	0x9B800000
#define LCD_FTLCDC200_2_PA_LIMIT	0x9B80CFFF
#define LCD_FTLCDC200_2_PA_SIZE	0x0000D000

/* Graphic Plance Encoder */
#define GRAPHIC_ENC_PA_COUNT    1
#define GRAPHIC_ENC_PA_BASE	    0x9B300000
#define GRAPHIC_ENC_PA_LIMIT	0x9B300FFF
#define GRAPHIC_ENC_PA_SIZE	    0x00001000
#define GRAPHIC_ENC_0_PA_BASE	0x9B300000
#define GRAPHIC_ENC_0_PA_LIMIT	0x9B300FFF
#define GRAPHIC_ENC_0_PA_SIZE	0x00001000

/* Graphic Plance Decoder */
#define GRAPHIC_DEC_PA_COUNT	3
#define GRAPHIC_DEC_PA_BASE	    0x9B400000
#define GRAPHIC_DEC_PA_LIMIT	0x9B400FFF
#define GRAPHIC_DEC_PA_SIZE	    0x00001000
#define GRAPHIC_DEC_0_PA_BASE	0x9B400000
#define GRAPHIC_DEC_0_PA_LIMIT	0x9B400FFF
#define GRAPHIC_DEC_0_PA_SIZE	0x00001000
#define GRAPHIC_DEC_1_PA_BASE	0x9B500000
#define GRAPHIC_DEC_1_PA_LIMIT	0x9B500FFF
#define GRAPHIC_DEC_1_PA_SIZE	0x00001000
#define GRAPHIC_DEC_2_PA_BASE	0x9B600000
#define GRAPHIC_DEC_2_PA_LIMIT	0x9B600FFF
#define GRAPHIC_DEC_2_PA_SIZE	0x00001000

/* SMC */
#define SMC_FTSMC010_PA_COUNT	1
#define SMC_FTSMC010_PA_BASE	0x92100000
#define SMC_FTSMC010_PA_LIMIT	0x92100FFF
#define SMC_FTSMC010_PA_SIZE	0x00001000
#define SMC_FTSMC010_0_PA_BASE	0x92100000
#define SMC_FTSMC010_0_PA_LIMIT	0x92100FFF
#define SMC_FTSMC010_0_PA_SIZE	0x00001000

/* 2D GRAPHIC */
#define GRA_FT2DGRA_PA_COUNT	1
#define GRA_FT2DGRA_PA_BASE	0x92200000
#define GRA_FT2DGRA_PA_LIMIT	0x92200FFF
#define GRA_FT2DGRA_PA_SIZE	0x00001000
#define GRA_FT2DGRA_0_PA_BASE	0x92200000
#define GRA_FT2DGRA_0_PA_LIMIT	0x92200FFF
#define GRA_FT2DGRA_0_PA_SIZE	0x00001000

/* MAC */
#define MAC_FTGMAC100_PA_COUNT	1
#define MAC_FTGMAC100_PA_BASE	0x92500000
#define MAC_FTGMAC100_PA_LIMIT	0x92500FFF
#define MAC_FTGMAC100_PA_SIZE	0x00001000
#define MAC_FTGMAC100_0_PA_BASE	0x92500000
#define MAC_FTGMAC100_0_PA_LIMIT	0x92500FFF
#define MAC_FTGMAC100_0_PA_SIZE	0x00001000
#define MAC_FTGMAC100_1_PA_BASE	0x92300000
#define MAC_FTGMAC100_1_PA_LIMIT	0x92300FFF
#define MAC_FTGMAC100_1_PA_SIZE	0x00001000

/* DMAC */
#define DMAC_FTDMAC020_PA_COUNT		2
#define DMAC_FTDMAC020_PA_BASE		0x92600000
#define DMAC_FTDMAC020_PA_LIMIT		0x92600FFF
#define DMAC_FTDMAC020_PA_SIZE		0x00001000
#define DMAC_FTDMAC020_0_PA_BASE	0x92600000
#define DMAC_FTDMAC020_0_PA_LIMIT	0x92600FFF
#define DMAC_FTDMAC020_0_PA_SIZE	0x00001000
#define DMAC_FTDMAC020_1_PA_BASE	0xC1A00000
#define DMAC_FTDMAC020_1_PA_LIMIT	0xC1A00FFF
#define DMAC_FTDMAC020_1_PA_SIZE	0x00001000

/* AES */
#define AES_FTAES020_PA_COUNT	1
#define AES_FTAES020_PA_BASE	0x92700000
#define AES_FTAES020_PA_LIMIT	0x92700FFF
#define AES_FTAES020_PA_SIZE	0x00001000
#define AES_FTAES020_0_PA_BASE	0x92700000
#define AES_FTAES020_0_PA_LIMIT	0x92700FFF
#define AES_FTAES020_0_PA_SIZE	0x00001000

/* CAP */
#define CAP_FTCAP300_PA_COUNT	1
#define CAP_FTCAP300_PA_BASE	0x96100000
#define CAP_FTCAP300_PA_LIMIT	0x96100FFF
#define CAP_FTCAP300_PA_SIZE	0x00001000
#define CAP_FTCAP300_0_PA_BASE	0x96100000
#define CAP_FTCAP300_0_PA_LIMIT	0x96100FFF
#define CAP_FTCAP300_0_PA_SIZE	0x00001000

/* AHBC */
#define AHBC_FTAHBC020_PA_COUNT		1
#define AHBC_FTAHBC020_PA_BASE		0x92A00000
#define AHBC_FTAHBC020_PA_LIMIT		0x92A00FFF
#define AHBC_FTAHBC020_PA_SIZE		0x00001000
#define AHBC_FTAHBC020_0_PA_BASE	0x92A00000
#define AHBC_FTAHBC020_0_PA_LIMIT	0x92A00FFF
#define AHBC_FTAHBC020_0_PA_SIZE	0x00001000

/* APBB */
#define APBB_FTAPBB020_PA_COUNT		3
#define APBB_FTAPBB020_PA_BASE		0x98100000
#define APBB_FTAPBB020_PA_LIMIT		0x98100FFF
#define APBB_FTAPBB020_PA_SIZE		0x00001000
#define APBB_FTAPBB020_0_PA_BASE	0x98100000
#define APBB_FTAPBB020_0_PA_LIMIT	0x98100FFF
#define APBB_FTAPBB020_0_PA_SIZE	0x00001000
#define APBB_FTAPBB020_1_PA_BASE	0x9A000000
#define APBB_FTAPBB020_1_PA_LIMIT	0x9A000FFF
#define APBB_FTAPBB020_1_PA_SIZE	0x00001000
#define APBB_FTAPBB020_2_PA_BASE	0x92C00000
#define APBB_FTAPBB020_2_PA_LIMIT	0x92C00FFF
#define APBB_FTAPBB020_2_PA_SIZE	0x00001000

/* DI3D */
#define DI3D_FTDI3D_PA_COUNT	2
#define DI3D_FTDI3D_PA_BASE	    0x9B100000
#define DI3D_FTDI3D_PA_LIMIT	0x9B100FFF
#define DI3D_FTDI3D_PA_SIZE	    0x00001000
#define DI3D_FTDI3D_0_PA_BASE	0x9B100000
#define DI3D_FTDI3D_0_PA_LIMIT	0x9B100FFF
#define DI3D_FTDI3D_0_PA_SIZE	0x00001000

#define DI3D_FTDI3D_1_PA_BASE   0x9BA00000
#define DI3D_FTDI3D_1_PA_LIMIT  0x9BA00FFF
#define DI3D_FTDI3D_1_PA_SIZE   0x00001000

/* H264E */
#define H264E_FTMCP280_PA_COUNT	1
#define H264E_FTMCP280_PA_BASE	0x90000000
#define H264E_FTMCP280_PA_LIMIT	0x90000FFF
#define H264E_FTMCP280_PA_SIZE	0x00001000
#define H264E_FTMCP280_0_PA_BASE	0x90000000
#define H264E_FTMCP280_0_PA_LIMIT	0x90000FFF
#define H264E_FTMCP280_0_PA_SIZE	0x00001000
#define H264E_FTMCP280_1_PA_BASE	0x90200000
#define H264E_FTMCP280_1_PA_LIMIT	0x90200FFF
#define H264E_FTMCP280_1_PA_SIZE	0x00001000

/* H264D */
#define H264D_FTMCP300_PA_COUNT	1
#define H264D_FTMCP300_PA_BASE	0x94200000
#define H264D_FTMCP300_PA_LIMIT	0x942FFFFF
#define H264D_FTMCP300_PA_SIZE	0x00100000
#define H264D_FTMCP300_0_PA_BASE	0x94200000
#define H264D_FTMCP300_0_PA_LIMIT	0x942FFFFF
#define H264D_FTMCP300_0_PA_SIZE	0x00100000
#define H264D_FTMCP300_1_PA_BASE	0x94000000
#define H264D_FTMCP300_1_PA_LIMIT	0x940FFFFF
#define H264D_FTMCP300_1_PA_SIZE	0x00100000

/* MCP */
#define MCP_FTMCP100_PA_COUNT	1
#define MCP_FTMCP100_PA_BASE	0x92000000
#define MCP_FTMCP100_PA_LIMIT	0x920FFFFF
#define MCP_FTMCP100_PA_SIZE	0x00100000
#define MCP_FTMCP100_0_PA_BASE	0x92000000
#define MCP_FTMCP100_0_PA_LIMIT	0x920FFFFF
#define MCP_FTMCP100_0_PA_SIZE	0x00100000

/* IR_DET */
#define IR_DET_FTIRDET_PA_COUNT	1
#define IR_DET_FTIRDET_PA_BASE	0x99C00000
#define IR_DET_FTIRDET_PA_LIMIT	0x99C00FFF
#define IR_DET_FTIRDET_PA_SIZE	0x00001000
#define IR_DET_FTIRDET_0_PA_BASE	0x99C00000
#define IR_DET_FTIRDET_0_PA_LIMIT	0x99C00FFF
#define IR_DET_FTIRDET_0_PA_SIZE	0x00001000

/* KPD */
#define KPD_FTKPD_PA_COUNT	1
#define KPD_FTKPD_PA_BASE	0x99D00000
#define KPD_FTKPD_PA_LIMIT	0x99D00FFF
#define KPD_FTKPD_PA_SIZE	0x00001000
#define KPD_FTKPD_0_PA_BASE	0x99D00000
#define KPD_FTKPD_0_PA_LIMIT	0x99D00FFF
#define KPD_FTKPD_0_PA_SIZE	0x00001000

/* XDMAC */
#define XDMAC_FTDMAC030_PA_COUNT	1
#define XDMAC_FTDMAC030_PA_BASE		0x9A100000
#define XDMAC_FTDMAC030_PA_LIMIT	0x9A100FFF
#define XDMAC_FTDMAC030_PA_SIZE		0x00001000
#define XDMAC_FTDMAC030_0_PA_BASE	0x9A100000
#define XDMAC_FTDMAC030_0_PA_LIMIT	0x9A100FFF
#define XDMAC_FTDMAC030_0_PA_SIZE	0x00001000

/* 8310 PCIE */
#define PCIE_PLDA_PA_COUNT      1
#define PCIE_PLDA_PA_BASE       0x99E00000
#define PCIE_PLDA_PA_LIMIT      0x99E01FFF
#define PCIE_PLDA_PA_SIZE       0x00002000
#define PCIE_PLDA_0_PA_BASE     0x99E00000
#define PCIE_PLDA_0_PA_LIMIT    0x99E01FFF
#define PCIE_PLDA_0_PA_SIZE     0x00002000

/* 8312 PCIE */
#define PCIE_PCIE_PLDA_PA_COUNT   1
#define PCIE_PCIE_PLDA_PA_BASE    0xC3700000
#define PCIE_PCIE_PLDA_PA_LIMIT   0xC3700FFF
#define PCIE_PCIE_PLDA_PA_SIZE    0x00001000
#define PCIE_PCIE_PLDA_0_PA_BASE  0xC3700000
#define PCIE_PCIE_PLDA_0_PA_LIMIT 0xC3700FFF
#define PCIE_PCIE_PLDA_0_PA_SIZE  0x00001000
#define PCIE_PCIE_PLDA_1_PA_BASE  0xC3800000
#define PCIE_PCIE_PLDA_1_PA_LIMIT 0xC3800FFF
#define PCIE_PCIE_PLDA_1_PA_SIZE  0x00001000

/* SATA */
#define SATA_FTSATA100_PA_COUNT	    4
#define SATA_FTSATA100_PA_BASE      0xC1100000
#define SATA_FTSATA100_PA_LIMIT     0xC1100FFF
#define SATA_FTSATA100_PA_SIZE      0x00001000
#define SATA_FTSATA100_0_PA_BASE    0xC1100000
#define SATA_FTSATA100_0_PA_LIMIT   0xC1100FFF
#define SATA_FTSATA100_0_PA_SIZE    0x00001000
#define SATA_FTSATA100_1_PA_BASE    0xC1200000
#define SATA_FTSATA100_1_PA_LIMIT   0xC1200FFF
#define SATA_FTSATA100_1_PA_SIZE    0x00001000
#define SATA_FTSATA100_2_PA_BASE    0xC1300000
#define SATA_FTSATA100_2_PA_LIMIT   0xC1300FFF
#define SATA_FTSATA100_2_PA_SIZE    0x00001000
#define SATA_FTSATA100_3_PA_BASE    0xC1400000
#define SATA_FTSATA100_3_PA_LIMIT   0xC1400FFF
#define SATA_FTSATA100_3_PA_SIZE    0x00001000

/* SATA H2X */
#define H2X_FTH2X030_SATA_PA_COUNT      4
#define H2X_FTH2X030_SATA_PA_BASE       0xC2900000
#define H2X_FTH2X030_SATA_PA_LIMIT      0xC2900FFF
#define H2X_FTH2X030_SATA_PA_SIZE       0x00001000
#define H2X_FTH2X030_SATA_0_PA_BASE     0xC2900000
#define H2X_FTH2X030_SATA_0_PA_LIMIT    0xC2900FFF
#define H2X_FTH2X030_SATA_0_PA_SIZE     0x00001000
#define H2X_FTH2X030_SATA_1_PA_BASE     0xC2A00000
#define H2X_FTH2X030_SATA_1_PA_LIMIT    0xC2A00FFF
#define H2X_FTH2X030_SATA_1_PA_SIZE     0x00001000
#define H2X_FTH2X030_SATA_2_PA_BASE     0xC2B00000
#define H2X_FTH2X030_SATA_2_PA_LIMIT    0xC2B00FFF
#define H2X_FTH2X030_SATA_2_PA_SIZE     0x00001000
#define H2X_FTH2X030_SATA_3_PA_BASE     0xC2C00000
#define H2X_FTH2X030_SATA_3_PA_LIMIT    0xC2C00FFF
#define H2X_FTH2X030_SATA_3_PA_SIZE     0x00001000

/* OTG */
#define USB_FOTG2XX_PA_COUNT	3
#define USB_FOTG2XX_PA_BASE	0xC1500000
#define USB_FOTG2XX_PA_LIMIT	0xC1500FFF
#define USB_FOTG2XX_PA_SIZE	0x00001000
#define USB_FOTG2XX_0_PA_BASE	0xC1500000
#define USB_FOTG2XX_0_PA_LIMIT	0xC1500FFF
#define USB_FOTG2XX_0_PA_SIZE	0x00001000
#define USB_FOTG2XX_1_PA_BASE	0xC1600000
#define USB_FOTG2XX_1_PA_LIMIT	0xC1600FFF
#define USB_FOTG2XX_1_PA_SIZE	0x00001000
#define USB_FOTG2XX_2_PA_BASE	0xC1700000
#define USB_FOTG2XX_2_PA_LIMIT	0xC1700FFF
#define USB_FOTG2XX_2_PA_SIZE	0x00001000
/* OTG H2X0 */
#define H2X0_FOTG2XX_PA_BASE	0xC2D00000
#define H2X0_FOTG2XX_PA_SIZE	0x00001000
/* OTG H2X1 */
#define H2X1_FOTG2XX_PA_BASE	0xC2E00000
#define H2X1_FOTG2XX_PA_SIZE	0x00001000
/* OTG H2X2 */
#define H2X2_FOTG2XX_PA_BASE	0xC2F00000
#define H2X2_FOTG2XX_PA_SIZE	0x00001000

/* TVE */
#define TVE_FTTVE100_PA_COUNT	1
#define TVE_FTTVE100_PA_BASE	0xC1800000
#define TVE_FTTVE100_PA_LIMIT	0xC1800FFF
#define TVE_FTTVE100_PA_SIZE	0x00001000
#define TVE_FTTVE100_0_PA_BASE	0xC1800000
#define TVE_FTTVE100_0_PA_LIMIT	0xC1800FFF
#define TVE_FTTVE100_0_PA_SIZE	0x00001000

/* HDMI */
#define HDMI_FTHDMI_PA_COUNT	1
#define HDMI_FTHDMI_PA_BASE	0xC1900000
#define HDMI_FTHDMI_PA_LIMIT	0xC1900FFF
#define HDMI_FTHDMI_PA_SIZE	0x00001000
#define HDMI_FTHDMI_0_PA_BASE	0xC1900000
#define HDMI_FTHDMI_0_PA_LIMIT	0xC1900FFF
#define HDMI_FTHDMI_0_PA_SIZE	0x00001000

#define HDMI_FTHDCPMEM_PA_BASE  0xC1B00000
#define HDMI_FTHDCPMEM_PA_LIMIT 0xC1B001FF
#define HDMI_FTHDCPMEM_PA_SIZE  0x00000200

/* I2S_PCIE */
#define I2S_PCIE_FTSSP010_PA_COUNT	2
#define I2S_PCIE_FTSSP010_PA_BASE	0xC3100000
#define I2S_PCIE_FTSSP010_PA_LIMIT	0xC3100FFF
#define I2S_PCIE_FTSSP010_PA_SIZE	0x00001000
#define I2S_PCIE_FTSSP010_0_PA_BASE	0xC3100000
#define I2S_PCIE_FTSSP010_0_PA_LIMIT	0xC3100FFF
#define I2S_PCIE_FTSSP010_0_PA_SIZE	0x00001000
#define I2S_PCIE_FTSSP010_1_PA_BASE	0xC3200000
#define I2S_PCIE_FTSSP010_1_PA_LIMIT	0xC3200FFF
#define I2S_PCIE_FTSSP010_1_PA_SIZE	0x00001000

/* I2C_PCIE */
#define I2C_PCIE_FTI2C010_PA_COUNT	4
#define I2C_PCIE_FTI2C010_PA_BASE	0xC3300000
#define I2C_PCIE_FTI2C010_PA_LIMIT	0xC3300FFF
#define I2C_PCIE_FTI2C010_PA_SIZE	0x00001000
#define I2C_PCIE_FTI2C010_0_PA_BASE	0xC3300000
#define I2C_PCIE_FTI2C010_0_PA_LIMIT	0xC3300FFF
#define I2C_PCIE_FTI2C010_0_PA_SIZE	0x00001000
#define I2C_PCIE_FTI2C010_1_PA_BASE	0xC3400000
#define I2C_PCIE_FTI2C010_1_PA_LIMIT	0xC3400FFF
#define I2C_PCIE_FTI2C010_1_PA_SIZE	0x00001000
#define I2C_PCIE_FTI2C010_2_PA_BASE	0xC3500000
#define I2C_PCIE_FTI2C010_2_PA_LIMIT	0xC3500FFF
#define I2C_PCIE_FTI2C010_2_PA_SIZE	0x00001000
#define I2C_PCIE_FTI2C010_3_PA_BASE	0xC3600000
#define I2C_PCIE_FTI2C010_3_PA_LIMIT	0xC3600FFF
#define I2C_PCIE_FTI2C010_3_PA_SIZE	0x00001000

/* SCAL */
#define SCAL_FTSCAL300_PA_COUNT 1
#define SCAL_FTSCAL300_PA_BASE  0x96200000
#define SCAL_FTSCAL300_PA_LIMIT 0x96247FFF
#define SCAL_FTSCAL300_PA_SIZE  0x00048000
#define SCAL_FTSCAL300_0_PA_BASE    0x96200000
#define SCAL_FTSCAL300_0_PA_LIMIT   0x96247FFF
#define SCAL_FTSCAL300_0_PA_SIZE    0x00048000
#define SCAL_FTSCAL300_1_PA_BASE    0x96300000
#define SCAL_FTSCAL300_1_PA_LIMIT   0x96347FFF
#define SCAL_FTSCAL300_1_PA_SIZE    0x00048000

/* IOLINK */
#define IOLINK_TX_PA_COUNT          3
#define IOLINK_TX_0_PA_BASE         0x9BB00000
#define IOLINK_TX_0_PA_SIZE         0x1000
#define IOLINK_TX_1_PA_BASE         0x9BC00000
#define IOLINK_TX_1_PA_SIZE         0x1000
#define IOLINK_TX_2_PA_BASE         0x9BD00000
#define IOLINK_TX_2_PA_SIZE         0x1000

/* H2XBrg_7 */
#define PCIE_H2XBRG_7_PA_BASE       0xC3000000
#define PCI3_H2SBRG_7_PA_SIZE       0x1000

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

#define PLATFORM_IRQ_TRIGGER_MODE9	0x00000000
#define PLATFORM_IRQ_TRIGGER_LEVEL9	0xFFFFFFFF
#define PLATFORM_FIQ_TRIGGER_MODE9	0x00000000
#define PLATFORM_FIQ_TRIGGER_LEVEL9	0xFFFFFFFF

#define PLATFORM_IRQ_TRIGGER_MODE10	0x00000000
#define PLATFORM_IRQ_TRIGGER_LEVEL10	0xFFFFFFFF
#define PLATFORM_FIQ_TRIGGER_MODE10	0x00000000
#define PLATFORM_FIQ_TRIGGER_LEVEL10	0xFFFFFFFF

#define PLATFORM_IRQ_TRIGGER_MODE11	0x00000000
#define PLATFORM_IRQ_TRIGGER_LEVEL11	0xFFFFFFFF
#define PLATFORM_FIQ_TRIGGER_MODE11	0x00000000
#define PLATFORM_FIQ_TRIGGER_LEVEL11	0xFFFFFFFF

#define PLATFORM_IRQ_TRIGGER_MODE12	0x00000000
#define PLATFORM_IRQ_TRIGGER_LEVEL12	0xFFFFFFFF
#define PLATFORM_FIQ_TRIGGER_MODE12	0x00000000
#define PLATFORM_FIQ_TRIGGER_LEVEL12	0xFFFFFFFF

#define PLATFORM_IRQ_TRIGGER_MODE13	0x00000000
#define PLATFORM_IRQ_TRIGGER_LEVEL13	0xFFFFFFFF
#define PLATFORM_FIQ_TRIGGER_MODE13	0x00000000
#define PLATFORM_FIQ_TRIGGER_LEVEL13	0xFFFFFFFF

#define PLATFORM_IRQ_TRIGGER_MODE14	0x00000000
#define PLATFORM_IRQ_TRIGGER_LEVEL14	0xFFFFFFFF
#define PLATFORM_FIQ_TRIGGER_MODE14	0x00000000
#define PLATFORM_FIQ_TRIGGER_LEVEL14	0xFFFFFFFF

#define PLATFORM_IRQ_TRIGGER_MODE15	0x00000000
#define PLATFORM_IRQ_TRIGGER_LEVEL15	0xFFFFFFFF
#define PLATFORM_FIQ_TRIGGER_MODE15	0x00000000
#define PLATFORM_FIQ_TRIGGER_LEVEL15	0xFFFFFFFF

#define PLATFORM_IRQ_TRIGGER_MODEEX2	0x00000000
#define PLATFORM_IRQ_TRIGGER_LEVELEX2	0xFFFFFFFF
#define PLATFORM_FIQ_TRIGGER_MODEEX2	0x00000000
#define PLATFORM_FIQ_TRIGGER_LEVELEX2	0xFFFFFFFF

#endif /* __PLATFORM_IO_H__ */
