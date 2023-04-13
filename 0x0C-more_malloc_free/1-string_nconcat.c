#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
*string_nconcat - concatenates two strings
*@s1: string 1
*@s2: string 2
*@n: value
*Return: 0
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int i, j;
char *result;

i = s1 ? strlen(s1) : 0;
j = s2 ? strlen(s2, n) : 0;
result = malloc(i + j + 1);

if (!result)
{
return (NULL);
}
if (i > 0)
{
memcpy(result, s1, i);
}
if (j > 0)
{
memcpy(result + i, s2, j);
}
result[i + j] = '\0';
return (result);
}
