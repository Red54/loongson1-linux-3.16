/*
 * Copyright (c) 2012 Tang, Haifeng <tanghaifeng-gz@loongson.cn>
 * Loongson 1 MUX Register Definitions.
 *
 * This program is free software; you can redistribute  it and/or modify it
 * under  the terms of  the GNU General  Public License as published by the
 * Free Software Foundation;  either version 2 of the  License, or (at your
 * option) any later version.
 */

#ifndef __ASM_MACH_LOONGSON1_REGS_MUX_H
#define __ASM_MACH_LOONGSON1_REGS_MUX_H

#define LS1X_MUX_REG(x) \
		((void __iomem *)KSEG1ADDR(LS1X_MUX_BASE + (x)))

#define LS1X_MUX_CTRL0		LS1X_MUX_REG(0x0)
#define LS1X_MUX_CTRL1		LS1X_MUX_REG(0x4)

#ifdef CONFIG_LOONGSON1_LS1C
#define USBHOST_SHUT		(0x1 << 5)
#define USBHOST_RSTN		(0x1 << 31)
#endif

#endif /* __ASM_MACH_LOONGSON1_REGS_MUX_H */
