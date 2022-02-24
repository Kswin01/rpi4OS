#include "io.h"
#include "include/stdio.h"

void main()
{
    uart_init();
    uart_writeText("Hello world!\n");
    printf("Hello, does this printf work?\n");

    while (1);
}