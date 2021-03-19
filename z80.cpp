// Copyright (C) 2021 Nuke.YKT
// License: GPLv2+
#include <stdio.h>
#include <string.h>

#include "z80.h"


void Z80_ClockRise(z80_t *chip)
{
    if (chip->clk)
        return;

    chip->clk = 1;
}

void Z80_ClockFall(z80_t *chip)
{
    if (!chip->clk)
        return;


    chip->clk = 0;
}


z80_t z80;

int main()
{

}
