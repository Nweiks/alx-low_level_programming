#include "main.h"

/**
 *
 *
 *
 */

void puts_half(char *str)
{
	int j = 0;

	while (str[j] != '\0')
	{
		j++;
	}
	if (j % 2 != 0)
	{
		_putchar(str([j - 1]/ 2));
	}
	else
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
