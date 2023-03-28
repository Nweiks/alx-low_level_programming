#include "main.h"

/**
*print_rev - reverse
*@str: char
*/

void print_rev(char *s)
{
int rev = 0;
int x;

while (*s != '\0')
{
rev++;
s++;
}
s--;
for (x = rev; x > 0; x--)
{
_putchar(*s);
s--;
}
_putchar('\n');
}
