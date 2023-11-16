#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include "lfsr.h"

void lfsr_calculate(uint16_t *reg) {
    /* YOUR CODE HERE */
    uint16_t Reg = *reg; // copy
    uint16_t MSB = ( Reg & 0x1 ) ^ ( ( Reg >> 2 ) & 0x1 ) ^ ( ( Reg >> 3 ) & 0x1 ) ^ ( ( Reg >> 5 ) & 0x1 ); // excuate XOR 
    MSB = MSB << 15; // MSB = x000000000000000, x= 0 or
    (*reg) = (*reg) >> 1;
    (*reg) = (*reg) | MSB;
}

