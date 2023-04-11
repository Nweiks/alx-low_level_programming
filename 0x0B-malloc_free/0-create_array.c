#include <stdio.h>
#include "main.h"

/**
*create_array - creates array 
*@size: size of array
*@c: array
*Return: null or 0
*/

char *create_array(unsigned int size, char c)
{
unsigned int i;
char *array = malloc(size * sizeof(char));

if (array == NULL)
{
return (NULL);
}
if (size == 0)
{
return (NULL);
}
for (i = 0; i < size; i++)
{
array[i] = c;
}
return (array);
}
