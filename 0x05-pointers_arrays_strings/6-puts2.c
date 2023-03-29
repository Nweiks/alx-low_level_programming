#include "main.h"

/**
 *puts2 - main 
 *@str: string tp be printed
 */

void puts2(char *str)
{
	int i;

	for (i = 0; i < (*str); i+=2)
	{
		_putchar(*str[i]);
	}
_putchar('\n');
}
