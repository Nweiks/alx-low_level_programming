#include <stdlib.h>
#include <string.h>

/**
*str_concat - concatenates two strings.
*@s1: string 1
*@s2: string 2
*Return: NULL
*/

char *str_concat(char *s1, char *s2)
{
size_t len1;
size_t len2;
char *result;

if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
len1 = strlen(s1);
len2 = strlen(s2);
result = malloc(len1 + len2 + 1);

if (result == NULL)
{
return (NULL);
memcpy(result, s1, len1);
memcpy(result, s2, len2 + 1);
}
return (result);
}
