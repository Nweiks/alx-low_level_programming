#include "main.h"

/**
*_puts - entry point
*str: char
*/

void _puts(char *str)
{
while (*str != '\0')
{
_putchar(*str++);
}
_putchar('\n');
}
