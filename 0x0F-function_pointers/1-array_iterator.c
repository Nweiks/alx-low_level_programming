#include "function_pointers.h"
#include <stdlib.h>

/**
 *array_iterator - iterates array
 *@array: arraybto be iterated
 *@size: size of array
 *@action: action to take
 *Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int j;

	if (array == NULL || action == NULL)
	{
		return;
	}
	for (j = 0; j < size; j++)
	{
		action(array[j]);
	}
}
