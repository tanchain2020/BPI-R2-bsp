/******************************************************************************
 *
 * Copyright(c) 2016 - 2017 Realtek Corporation. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of version 2 of the GNU General Public License as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for
 * more details.
 *
 ******************************************************************************/

#ifndef _HALMAC_GPIO_8821C_H_
#define _HALMAC_GPIO_8821C_H_

#include "../../halmac_api.h"

#if HALMAC_8821C_SUPPORT

/* P_LED0 definition */
#define HALMAC_GPIO0_BT_GPIO0_8821C				{HALMAC_BT_GPIO, HALMAC_GPIO0, HALMAC_GPIO_IN_OUT, 0x66, BIT(2), BIT(2)}

/* GPIO0 definition */
#define HALMAC_GPIO0_BT_GPIO0_8821C				{HALMAC_BT_GPIO, HALMAC_GPIO0, HALMAC_GPIO_IN_OUT, 0x66, BIT(2), BIT(2)}
#define HALMAC_GPIO0_BT_ACT_8821C				{HALMAC_BT_PTA, HALMAC_GPIO0, HALMAC_GPIO_IN_OUT, 0x41, BIT(1), 0}
#define HALMAC_GPIO0_WL_ACT_8821C				{HALMAC_WL_PTA, HALMAC_GPIO0, HALMAC_GPIO_IN_OUT, 0x41, BIT(2), BIT(2)}
#define HALMAC_GPIO0_WLMAC_DBG_GPIO0_8821C		{HALMAC_WLMAC_DBG, HALMAC_GPIO0, HALMAC_GPIO_OUT, 0x40, BIT(1) | BIT(0), BIT(0)}
#define HALMAC_GPIO0_WLPHY_DBG_GPIO0_8821C		{HALMAC_WLPHY_DBG, HALMAC_GPIO0, HALMAC_GPIO_IN_OUT, 0x40, BIT(1) | BIT(0), BIT(1)}
#define HALMAC_GPIO0_BT_DBG_GPIO0_8821C			{HALMAC_BT_DBG, HALMAC_GPIO0, HALMAC_GPIO_OUT, 0x40, BIT(1) | BIT(0), BIT(0) | BIT(1)}
#define HALMAC_GPIO0_SW_IO_8821C				{HALMAC_SW_IO, HALMAC_GPIO0, HALMAC_GPIO_IN_OUT, 0x40, BIT(1) | BIT(0), 0}

/* GPIO1 definition */
#define HALMAC_GPIO1_BT_GPIO1_8821C				{HALMAC_BT_GPIO, HALMAC_GPIO1, HALMAC_GPIO_IN_OUT, 0x66, BIT(2), BIT(2)}
#define HALMAC_GPIO1_BT_3DD_SYNC_A_8821C		{HALMAC_BT_3DDLS_A, HALMAC_GPIO1, HALMAC_GPIO_IN, 0x66, BIT(2), BIT(2)}
#define HALMAC_GPIO1_WL_CK_8821C				{HALMAC_BT_PTA, HALMAC_GPIO1, HALMAC_GPIO_OUT, 0x41, BIT(1), 0}
#define HALMAC_GPIO1_BT_CK_8821C				{HALMAC_WL_PTA, HALMAC_GPIO1, HALMAC_GPIO_OUT, 0x41, BIT(2), BIT(2)}
#define HALMAC_GPIO1_WLMAC_DBG_GPIO1_8821C		{HALMAC_WLMAC_DBG, HALMAC_GPIO1, HALMAC_GPIO_OUT, 0x40, BIT(1) | BIT(0), BIT(0)}
#define HALMAC_GPIO1_WLPHY_DBG_GPIO1_8821C		{HALMAC_WLPHY_DBG, HALMAC_GPIO1, HALMAC_GPIO_IN_OUT, 0x40, BIT(1) | BIT(0), BIT(1)}
#define HALMAC_GPIO1_BT_DBG_GPIO1_8821C			{HALMAC_BT_DBG, HALMAC_GPIO1, HALMAC_GPIO_OUT, 0x40, BIT(1) | BIT(0), BIT(0) | BIT(1)}
#define HALMAC_GPIO1_SW_IO_8821C				{HALMAC_SW_IO, HALMAC_GPIO1, HALMAC_GPIO_IN_OUT, 0x40, BIT(1) | BIT(0), 0}

/* GPIO2 definition */
#define HALMAC_GPIO2_BT_GPIO2_8821C				{HALMAC_BT_GPIO, HALMAC_GPIO2, HALMAC_GPIO_IN_OUT, 0x66, BIT(2), BIT(2)}
#define HALMAC_GPIO2_WL_STATE_8821C				{HALMAC_BT_PTA, HALMAC_GPIO2, HALMAC_GPIO_OUT, 0x41, BIT(1), 0}
#define HALMAC_GPIO2_BT_STATE_8821C				{HALMAC_WL_PTA, HALMAC_GPIO2, HALMAC_GPIO_OUT, 0x41, BIT(2), BIT(2)}
#define HALMAC_GPIO2_WLMAC_DBG_GPIO2_8821C		{HALMAC_WLMAC_DBG, HALMAC_GPIO2, HALMAC_GPIO_OUT, 0x40, BIT(1) | BIT(0), BIT(0)}
#define HALMAC_GPIO2_WLPHY_DBG_GPIO2_8821C		{HALMAC_WLPHY_DBG, HALMAC_GPIO2, HALMAC_GPIO_IN_OUT, 0x40, BIT(1) | BIT(0), BIT(1)}
#define HALMAC_GPIO2_BT_DBG_GPIO2_8821C			{HALMAC_BT_DBG, HALMAC_GPIO2, HALMAC_GPIO_OUT, 0x40, BIT(1) | BIT(0), BIT(0) | BIT(1)}
#define HALMAC_GPIO2_RFE_CTRL_5_8821C			{HALMAC_WLPHY_RFE_CTRL2GPIO, HALMAC_GPIO2, HALMAC_GPIO_IN_OUT, 0x40, BIT(2), BIT(2)}
#define HALMAC_GPIO2_SW_IO_8821C				{HALMAC_SW_IO, HALMAC_GPIO2, HALMAC_GPIO_IN_OUT, 0x40, BIT(1) | BIT(0), 0}

/* GPIO3 definition */
#define HALMAC_GPIO3_BT_GPIO3_8821C				{HALMAC_BT_GPIO, HALMAC_GPIO3, HALMAC_GPIO_IN_OUT, 0x66, BIT(2), BIT(2)}
#define HALMAC_GPIO3_WL_PRI_8821C				{HALMAC_BT_PTA, HALMAC_GPIO3, HALMAC_GPIO_OUT, 0x41, BIT(1), 0}
#define HALMAC_GPIO3_BT_PRI_8821C				{HALMAC_WL_PTA, HALMAC_GPIO3, HALMAC_GPIO_OUT, 0x41, BIT(2), BIT(2)}
#define HALMAC_GPIO3_WLMAC_DBG_GPIO3_8821C		{HALMAC_WLMAC_DBG, HALMAC_GPIO3, HALMAC_GPIO_OUT, 0x40, BIT(1) | BIT(0), BIT(0)}
#define HALMAC_GPIO3_WLPHY_DBG_GPIO3_8821C		{HALMAC_WLPHY_DBG, HALMAC_GPIO3, HALMAC_GPIO_IN_OUT, 0x40, BIT(1) | BIT(0), BIT(1)}
#define HALMAC_GPIO3_BT_DBG_GPIO3_8821C			{HALMAC_BT_DBG, HALMAC_GPIO3, HALMAC_GPIO_OUT, 0x40, BIT(1) | BIT(0), BIT(0) | BIT(1)}
#define HALMAC_GPIO3_RFE_CTRL_4_8821C			{HALMAC_WLPHY_RFE_CTRL2GPIO, HALMAC_GPIO3, HALMAC_GPIO_IN_OUT, 0x40, BIT(2), BIT(2)}
#define HALMAC_GPIO3_SW_IO_8821C				{HALMAC_SW_IO, HALMAC_GPIO3, HALMAC_GPIO_IN_OUT, 0x40, BIT(1) | BIT(0), 0}

/* GPIO4 definition */
#define HALMAC_GPIO4_BT_SPI_D0_8821C			{HALMAC_BT_SFLASH, HALMAC_GPIO4, HALMAC_GPIO_IN_OUT, 0x66, BIT(4), BIT(4)}
#define HALMAC_GPIO4_WL_SPI_D0_8821C			{HALMAC_WL_SFLASH, HALMAC_GPIO4, HALMAC_GPIO_IN_OUT, 0x42, BIT(3), BIT(3)}
#define HALMAC_GPIO4_SDIO_INT_8821C				{HALMAC_SDIO_INT, HALMAC_GPIO4, HALMAC_GPIO_OUT, 0x72, BIT(2), BIT(2)}
#define HALMAC_GPIO4_JTAG_TRST_8821C			{HALMAC_JTAG, HALMAC_GPIO4, HALMAC_GPIO_IN, 0x67, BIT(0), BIT(0)}
#define HALMAC_GPIO4_DBG_GNT_WL_8821C			{HALMAC_DBG_GNT_WL_BT, HALMAC_GPIO4, HALMAC_GPIO_OUT, 0x73, BIT(3), BIT(3)}
#define HALMAC_GPIO4_WLMAC_DBG_GPIO4_8821C		{HALMAC_WLMAC_DBG, HALMAC_GPIO4, HALMAC_GPIO_OUT, 0x40, BIT(1) | BIT(0), BIT(0)}
#define HALMAC_GPIO4_WLPHY_DBG_GPIO4_8821C		{HALMAC_WLPHY_DBG, HALMAC_GPIO4, HALMAC_GPIO_IN_OUT, 0x40, BIT(1) | BIT(0), BIT(1)}
#define HALMAC_GPIO4_BT_DBG_GPIO4_8821C			{HALMAC_BT_DBG, HALMAC_GPIO4, HALMAC_GPIO_OUT, 0x40, BIT(1) | BIT(0), BIT(0) | BIT(1)}
#define HALMAC_GPIO4_SW_IO_8821C				{HALMAC_SW_IO, HALMAC_GPIO4, HALMAC_GPIO_IN_OUT, 0x40, BIT(1) | BIT(0), 0}

/* GPIO5 definition */
#define HALMAC_GPIO5_BT_SPI_D1_8821C			{HALMAC_BT_SFLASH, HALMAC_GPIO5, HALMAC_GPIO_IN_OUT, 0x66, BIT(4), BIT(4)}
#define HALMAC_GPIO5_WL_SPI_D1_8821C			{HALMAC_WL_SFLASH, HALMAC_GPIO5, HALMAC_GPIO_IN_OUT, 0x42, BIT(3), BIT(3)}
#define HALMAC_GPIO5_JTAG_TDI_8821C				{HALMAC_JTAG, HALMAC_GPIO5, HALMAC_GPIO_IN, 0x67, BIT(0), BIT(0)}
#define HALMAC_GPIO5_DBG_GNT_BT_8821C			{HALMAC_DBG_GNT_WL_BT, HALMAC_GPIO5, HALMAC_GPIO_OUT, 0x73, BIT(3), BIT(3)}
#define HALMAC_GPIO5_WLMAC_DBG_GPIO5_8821C		{HALMAC_WLMAC_DBG, HALMAC_GPIO5, HALMAC_GPIO_OUT, 0x40, BIT(1) | BIT(0), BIT(0)}
#define HALMAC_GPIO5_WLPHY_DBG_GPIO5_8821C		{HALMAC_WLPHY_DBG, HALMAC_GPIO5, HALMAC_GPIO_IN_OUT, 0x40, BIT(1) | BIT(0), BIT(1)}
#define HALMAC_GPIO5_BT_DBG_GPIO5_8821C			{HALMAC_BT_DBG, HALMAC_GPIO5, HALMAC_GPIO_OUT, 0x40, BIT(1) | BIT(0), BIT(0) | BIT(1)}
#define HALMAC_GPIO5_SW_IO_8821C				{HALMAC_SW_IO, HALMAC_GPIO5, HALMAC_GPIO_IN_OUT, 0x40, BIT(1) | BIT(0), 0}

/* GPIO6 definition */
#define HALMAC_GPIO6_BT_SPI_D2_8821C			{HALMAC_BT_SFLASH, HALMAC_GPIO6, HALMAC_GPIO_IN_OUT, 0x66, BIT(4), BIT(4)}
#define HALMAC_GPIO6_WL_SPI_D2_8821C			{HALMAC_WL_SFLASH, HALMAC_GPIO6, HALMAC_GPIO_IN_OUT, 0x42, BIT(3), BIT(3)}
#define HALMAC_GPIO6_EEDO_8821C					{HALMAC_EEPROM, HALMAC_GPIO6, HALMAC_GPIO_IN, 0x40, BIT(4), BIT(4)}
#define HALMAC_GPIO6_JTAG_TDO_8821C				{HALMAC_JTAG, HALMAC_GPIO6, HALMAC_GPIO_OUT, 0x67, BIT(0), BIT(0)}
#define HALMAC_GPIO6_BT_3DD_SYNC_B_8821C		{HALMAC_BT_3DDLS_B, HALMAC_GPIO6, HALMAC_GPIO_IN, 0x67, BIT(1), BIT(1)}
#define HALMAC_GPIO6_BT_GPIO18_8821C			{HALMAC_BT_GPIO, HALMAC_GPIO6, HALMAC_GPIO_IN_OUT, 0x67, BIT(1), BIT(1)}
#define HALMAC_GPIO6_SIN_8821C					{HALMAC_WL_UART, HALMAC_GPIO6, HALMAC_GPIO_IN, 0x41, BIT(0), BIT(0)}
#define HALMAC_GPIO6_WLMAC_DBG_GPIO6_8821C		{HALMAC_WLMAC_DBG, HALMAC_GPIO6, HALMAC_GPIO_OUT, 0x40, BIT(1) | BIT(0), BIT(0)}
#define HALMAC_GPIO6_WLPHY_DBG_GPIO6_8821C		{HALMAC_WLPHY_DBG, HALMAC_GPIO6, HALMAC_GPIO_IN_OUT, 0x40, BIT(1) | BIT(0), BIT(1)}
#define HALMAC_GPIO6_BT_DBG_GPIO6_8821C			{HALMAC_BT_DBG, HALMAC_GPIO6, HALMAC_GPIO_OUT, 0x40, BIT(1) | BIT(0), BIT(0) | BIT(1)}
#define HALMAC_GPIO6_SW_IO_8821C				{HALMAC_SW_IO, HALMAC_GPIO6, HALMAC_GPIO_IN_OUT, 0x40, BIT(1) | BIT(0), 0}

/* GPIO7 definition */
#define HALMAC_GPIO7_BT_SPI_D3_8821C			{HALMAC_BT_SFLASH, HALMAC_GPIO7, HALMAC_GPIO_IN_OUT, 0x66, BIT(4), BIT(4)}
#define HALMAC_GPIO7_WL_SPI_D3_8821C			{HALMAC_WL_SFLASH, HALMAC_GPIO7, HALMAC_GPIO_IN_OUT, 0x42, BIT(3), BIT(3)}
#define HALMAC_GPIO7_EEDI_8821C					{HALMAC_EEPROM, HALMAC_GPIO7, HALMAC_GPIO_OUT, 0x40, BIT(4), BIT(4)}
#define HALMAC_GPIO7_JTAG_TMS_8821C				{HALMAC_JTAG, HALMAC_GPIO7, HALMAC_GPIO_IN, 0x67, BIT(0), BIT(0)}
#define HALMAC_GPIO7_BT_GPIO16_8821C			{HALMAC_BT_GPIO, HALMAC_GPIO7, HALMAC_GPIO_IN_OUT, 0x67, BIT(2), BIT(2)}
#define HALMAC_GPIO7_SOUT_8821C					{HALMAC_WL_UART, HALMAC_GPIO7, HALMAC_GPIO_OUT, 0x41, BIT(0), BIT(0)}
#define HALMAC_GPIO7_WLMAC_DBG_GPIO7_8821C		{HALMAC_WLMAC_DBG, HALMAC_GPIO7, HALMAC_GPIO_OUT, 0x40, BIT(1) | BIT(0), BIT(0)}
#define HALMAC_GPIO7_WLPHY_DBG_GPIO7_8821C		{HALMAC_WLPHY_DBG, HALMAC_GPIO7, HALMAC_GPIO_IN_OUT, 0x40, BIT(1) | BIT(0), BIT(1)}
#define HALMAC_GPIO7_BT_DBG_GPIO7_8821C			{HALMAC_BT_DBG, HALMAC_GPIO7, HALMAC_GPIO_OUT, 0x40, BIT(1) | BIT(0), BIT(0) | BIT(1)}
#define HALMAC_GPIO7_SW_IO_8821C				{HALMAC_SW_IO, HALMAC_GPIO7, HALMAC_GPIO_IN_OUT, 0x40, BIT(1) | BIT(0), 0}

/* GPIO8 definition */
#define HALMAC_GPIO8_WL_EXT_WOL_8821C			{HALMAC_WL_HW_EXTWOL, HALMAC_GPIO8, HALMAC_GPIO_IN, 0x4a, BIT(0) | BIT(1), BIT(0) | BIT(1)}
#define HALMAC_GPIO8_WL_LED_8821C				{HALMAC_WL_LED, HALMAC_GPIO8, HALMAC_GPIO_OUT, 0x4e, BIT(5), BIT(5)}
#define HALMAC_GPIO8_SW_IO_8821C				{HALMAC_SW_IO, HALMAC_GPIO8, HALMAC_GPIO_IN_OUT, 0x40, BIT(1) | BIT(0), 0}

/* GPIO9 definition */
#define HALMAC_GPIO9_DIS_WL_N_8821C				{HALMAC_WL_HWPDN, HALMAC_GPIO9, HALMAC_GPIO_IN, 0x68, BIT(3) | BIT(0), BIT(3) | BIT(0)}
#define HALMAC_GPIO9_WL_EXT_WOL_8821C			{HALMAC_WL_HW_EXTWOL, HALMAC_GPIO9, HALMAC_GPIO_IN, 0x4a, BIT(0) | BIT(1), BIT(0)}
#define HALMAC_GPIO9_USCTS0_8821C				{HALMAC_UART0, HALMAC_GPIO9, HALMAC_GPIO_IN, 0x66, BIT(6), BIT(6)}
#define HALMAC_GPIO9_SW_IO_8821C				{HALMAC_SW_IO, HALMAC_GPIO9, HALMAC_GPIO_IN_OUT, 0x40, BIT(1) | BIT(0), 0}

/* GPIO10 definition */
#define HALMAC_GPIO10_SW_IO_8821C				{HALMAC_SW_IO, HALMAC_GPIO10, HALMAC_GPIO_IN_OUT, 0x40, BIT(1) | BIT(0), 0}

/* GPIO11 definition */
#define HALMAC_GPIO11_DIS_BT_N_8821C			{HALMAC_BT_HWPDN, HALMAC_GPIO11, HALMAC_GPIO_IN, 0x6a, BIT(0), BIT(0)}
#define HALMAC_GPIO11_USOUT0_8821C				{HALMAC_UART0, HALMAC_GPIO11, HALMAC_GPIO_OUT, 0x66, BIT(6), BIT(6)}
#define HALMAC_GPIO11_SW_IO_8821C				{HALMAC_SW_IO, HALMAC_GPIO11, HALMAC_GPIO_IN_OUT, 0x40, BIT(1) | BIT(0), 0}

/* GPIO12 definition */
#define HALMAC_GPIO12_USIN0_8821C				{HALMAC_UART0, HALMAC_GPIO12, HALMAC_GPIO_IN, 0x66, BIT(6), BIT(6)}
#define HALMAC_GPIO12_SW_IO_8821C				{HALMAC_SW_IO, HALMAC_GPIO12, HALMAC_GPIO_IN_OUT, 0x40, BIT(1) | BIT(0), 0}

/* GPIO13 definition */
#define HALMAC_GPIO13_BT_WAKE_8821C				{HALMAC_GPIO13_14_WL_CTRL_EN, HALMAC_GPIO13, HALMAC_GPIO_IN, 0x4e, BIT(6), BIT(6)}
#define HALMAC_GPIO13_SW_IO_8821C				{HALMAC_SW_IO, HALMAC_GPIO13, HALMAC_GPIO_IN_OUT, 0x40, BIT(1) | BIT(0), 0}

/* GPIO14 definition */
#define HALMAC_GPIO14_UART_WAKE_8821C			{HALMAC_GPIO13_14_WL_CTRL_EN, HALMAC_GPIO14, HALMAC_GPIO_OUT, 0x4e, BIT(6), BIT(6)}
#define HALMAC_GPIO14_SW_IO_8821C				{HALMAC_SW_IO, HALMAC_GPIO14, HALMAC_GPIO_IN_OUT, 0x40, BIT(1) | BIT(0), 0}

/* GPIO15 definition */
#define HALMAC_GPIO15_EXT_XTAL_8821C			{HALMAC_EXT_XTAL, HALMAC_GPIO15, HALMAC_GPIO_OUT, 0x66, BIT(7), BIT(7)}
#define HALMAC_GPIO15_SW_IO_8821C				{HALMAC_SW_IO, HALMAC_GPIO15, HALMAC_GPIO_IN_OUT, 0x40, BIT(1) | BIT(0), 0}

enum halmac_ret_status
halmac_pinmux_get_func_8821c(
	IN struct halmac_adapter *adapter,
	IN enum halmac_gpio_func gpio_func,
	OUT u8 *enable
);

enum halmac_ret_status
halmac_pinmux_set_func_8821c(
	IN struct halmac_adapter *adapter,
	IN enum halmac_gpio_func gpio_func
);

enum halmac_ret_status
halmac_pinmux_free_func_8821c(
	IN struct halmac_adapter *adapter,
	IN enum halmac_gpio_func gpio_func
);

#endif /* HALMAC_8821C_SUPPORT */

#endif/* _HALMAC_GPIO_8821C_H_ */
