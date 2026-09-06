//
// Created by Manish Kumar Pandey on 06/09/26.
//
#include <stdio.h>

int main(void) {

    int a = 255;
    int b = 0xFF;
    int value = 255;

    printf("char           = %zu bytes\n", sizeof(char));
    printf("short          = %zu bytes\n", sizeof(short));
    printf("int            = %zu bytes\n", sizeof(int));
    printf("long           = %zu bytes\n", sizeof(long));
    printf("long long      = %zu bytes\n", sizeof(char));
    printf("a              = %d\n", a);
    printf("b              = %d\n", b);
    printf("value          = %d\n", value);
    printf("Hexadecimal    = %x\n", value);
    printf("Hexadecimal    = 0x%x\n", value);

    return 0;
}