/*
 * Copyright (c) 2016 Synopsys, Inc. All rights reserved.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#ifdef CONFIG_UART_NS16550
#include <device.h>
#include <init.h>
#include "soc.h"

static int uart_ns16550_init(struct device *dev)
{
	ARG_UNUSED(dev);
#if 0
#ifdef CONFIG_UART_NS16550_PORT_0
	uint32_t clk = dmu_get_clock(LYNX_UART_CLK);

        reg_write(CDRU_IOMUX_CTRL26, 0);
        reg_write(CDRU_IOMUX_CTRL28, 0);
        lynx_iomux_set(MFIO_26, IP_UART0, SF_UART_RX);
        lynx_iomux_set(MFIO_27, IP_UART0, SF_UART_TX);
        lynx_iomux_set(MFIO_28, IP_UART0, SF_UART_CTS);
        lynx_iomux_set(MFIO_29, IP_UART0, SF_UART_RTS);
        bcm_uart_init(UART0_ID, (clk/(CONSOLE_BAUD_RATE<<4)));



	sys_write32(0, UART_NS16550_PORT_0_BASE_ADDR+0x4);
	sys_write32(0, UART_NS16550_PORT_0_BASE_ADDR+0x10);
#endif /* CONFIG_UART_NS16550_PORT_0 */
#ifdef CONFIG_UART_NS16550_PORT_1
	sys_write32(0, UART_NS16550_PORT_1_BASE_ADDR+0x4);
	sys_write32(0, UART_NS16550_PORT_1_BASE_ADDR+0x10);
#endif /* CONFIG_UART_NS16550_PORT_1 */
#endif
	return 0;
}

SYS_INIT(uart_ns16550_init, PRE_KERNEL_1, CONFIG_KERNEL_INIT_PRIORITY_DEFAULT);

#endif /* CONFIG_UART_NS16550 */
