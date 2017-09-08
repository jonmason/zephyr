/*
 * Copyright (c) 2017 Broadcom. All rights reserved.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef _BOARD__H_
#define _BOARD__H_

/* default system clock */

//FIXME - find the right clock speed for this
#define SYSCLK_DEFAULT_IOSC_HZ			MHZ(50)
/* On the EM Starter Kit board, the peripheral bus clock frequency is 50Mhz */


#define UART_NS16550_PORT_0_BASE_ADDR		0x44030000
#define UART_NS16550_PORT_0_IRQ			0
#define UART_NS16550_PORT_0_CLK_FREQ		SYSCLK_DEFAULT_IOSC_HZ

#define UART_NS16550_PORT_1_BASE_ADDR		0x44020000
#define UART_NS16550_PORT_1_IRQ			0
#define UART_NS16550_PORT_1_CLK_FREQ		SYSCLK_DEFAULT_IOSC_HZ

#define UART_NS16550_PORT_2_BASE_ADDR		0x44010000
#define UART_NS16550_PORT_2_IRQ			0
#define UART_NS16550_PORT_2_CLK_FREQ		SYSCLK_DEFAULT_IOSC_HZ

#define UART_NS16550_PORT_3_BASE_ADDR		0x44000000
#define UART_NS16550_PORT_3_IRQ			0
#define UART_NS16550_PORT_3_CLK_FREQ		SYSCLK_DEFAULT_IOSC_HZ

#endif /* _BOARD__H_ */
