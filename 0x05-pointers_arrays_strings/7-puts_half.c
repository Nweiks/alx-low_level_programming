#include "main.h"

/**
 *puts_half - main
 *@str: string to be printed
 *Return: 0
 */

void puts_half(char *str)
{
	int j = 0;
int i;

	while (str[j] != '\0')
	{
		j++;
	}
	if (i % 2 != 0)
	{
		_putchar(str[i]- 1 / 2);
	}
	else
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
