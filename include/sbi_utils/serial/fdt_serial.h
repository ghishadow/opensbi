/*
 * SPDX-License-Identifier: BSD-2-Clause
 *
 * Copyright (c) 2020 Western Digital Corporation or its affiliates.
 *
 * Authors:
 *   Anup Patel <anup.patel@wdc.com>
 */

#ifndef __FDT_SERIAL_H__
#define __FDT_SERIAL_H__

#include <sbi/sbi_types.h>

#ifdef CONFIG_FDT_SERIAL

struct fdt_serial {
	const struct fdt_match *match_table;
	int (*init)(const void *fdt, int nodeoff, const struct fdt_match *match);
};

int fdt_serial_init(const void *fdt);

#else

static inline int fdt_serial_init(const void *fdt) { return 0; }

#endif

#endif
