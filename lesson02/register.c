//
// Created by Manish Kumar Pandey on 06/09/26.
//
#include <stdio.h>
#include <stdint.h>

int main(void) {
    uint8_t reg8 = 0x80;
    uint16_t reg16 = 0x1234;
    uint32_t reg32 = 0x12345678;

    printf("uint8_t size = %zu\n", sizeof(reg8));
    printf("uint16_t size = %zu\n", sizeof(reg16));
    printf("uint32_t size = %zu\n", sizeof(reg32));

    printf("reg8   =  0x%02X\n", (unsigned int)reg8);
    printf("reg16 =  0x%04X\n", (unsigned int)reg16);
    printf("reg32 =  0x%08X\n", (unsigned int)reg32);

    return 0;
}