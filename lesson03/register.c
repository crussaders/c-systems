//
// Created by Manish Kumar Pandey on 06/09/26.
//
#include <stdio.h>
#include <stdint.h>

#define DEVICE_ENABLE_BIT 0
#define INTERRUPT_BIT 1
#define DNA_BIT 2
#define LED_BIT 5
//Improve with a BIT MACRO
#define BIT(n) (1U << (n))

int main(void) {


    //
    // uint8_t control_reg = 0;
    // printf("Initial register: 0x%02X\n",
    //         (unsigned int)control_reg);
    //
    // control_reg |= (1U << DEVICE_ENABLE_BIT);
    //
    // printf("Device Enabled: 0x%02X\n",
    //     (unsigned int)control_reg);
    //
    // control_reg |= (1U << LED_BIT);
    //
    // printf("LED Enabled: 0x%02X\n",
    //     (unsigned int)control_reg);
    //
    // control_reg &= ~(1U << DEVICE_ENABLE_BIT);
    //
    // printf("Device Disabled: 0x%02X\n",
    //     (unsigned int)control_reg);
    //
    // return 0;

    //Improve with BIT Macro

    // uint8_t control_reg = 0;
    //
    // control_reg |= BIT(DEVICE_ENABLE_BIT);
    //
    // control_reg |= BIT(INTERRUPT_BIT);
    //
    // control_reg |= BIT(LED_BIT);
    //
    // printf("Device Disabled: 0x%02X\n",
    //     (unsigned int)control_reg);

    uint8_t reg = 0x12;

    // reg |= BIT(5);

    // printf("reg = %x\n", reg);

    for (int i=7; i>=0; i--) {
        printf("%d",(reg >> i) & 1);
    }
    return 0;
}