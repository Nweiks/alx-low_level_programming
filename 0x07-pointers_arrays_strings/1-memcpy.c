#include "main.h"

/**
 *_memcpy - copy string or array
 *@src:
 *@dest:
 *@n: value
 *Return: 0
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
char *ptr = dest;
unsigned int i;

for (i = 0; i < n; i++)
{
*ptr++ = *src++;
}
return (dest);
}
