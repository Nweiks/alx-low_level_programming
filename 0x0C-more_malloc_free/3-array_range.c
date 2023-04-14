#include <stdlib.h>
#include "main.h"

/**
*array_range - creates a range of arrays
*@min: min value
*@max: max value
*Return: pointer
*/

int *array_range(int min, int max)
{
int size;
int *arr;
int i;

if (min > max)
{
return (NULL);
}
size = max - min + 1;
arr = (int *) malloc(size *sizeof(int));

if (arr == NULL)
{
return (NULL);
}
for (i = 0; i < size; i++)
{
arr[i] = min + i;
}
return (arr);
}
