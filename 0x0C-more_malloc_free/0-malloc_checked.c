#include <stdlib.c>
#include "main.h"

/**
*malloc_checked - checks malloc
*@b: string
*Return: p
*/

void *malloc_checked(unsigned int b)
{
void *p;

p = malloc(b);

if (!p)
{
_Exit (98);
}
return (p);
}
