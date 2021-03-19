// Copyright (C) 2021 Nuke.YKT
// License: GPLv2+
#ifndef _Z80_H_
#define _Z80_H_

#include <stdint.h>

typedef struct _z80_t {
    uint8_t clk;
    uint8_t m1, m2, m3, m4, m5;
    uint8_t t1, t2, t3, t4, t5;
} z80_t;


#endif
