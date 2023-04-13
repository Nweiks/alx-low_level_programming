#include <stdlib.h>
#include <string.h>

/**
*_calloc - allocate memory 
*@nmemb: string 
*@size: size of string
*Return: p
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
void *p;

if (nmemb == 0 || size == 0)
{
return (NULL);
}
p = malloc(nmemc * size);

if (!p) 
{
return (NULL);
}
memset (p, 0, nmemb * size);
return (p)
}
