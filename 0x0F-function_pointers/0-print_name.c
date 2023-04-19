#include <stdlib.h>
#include "function_pointers.h"

/**
 *print_name - main function
 *@name: string of name
 *@f: char
 *Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}
	f(name);
}
