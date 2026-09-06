//
// Created by Manish Kumar Pandey on 06/09/26.
//
#include <stdint.h>
#include <stdio.h>

int main(void) {
    uint32_t control_register = 0x00000020;
    printf("control_register = 0x%08x\n", (unsigned int)control_register);
    return 0;
}