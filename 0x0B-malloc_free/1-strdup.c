#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
*_strdup - returns apointer to a newly allocated string
*@str: string
*Return: NULL
*/

char *_strdup(char *str)
{
int len;
char *new_str;

if (str == NULL)
{
return (NULL);
}

len = strlen(str);
new_str = (char *) malloc(sizeof(char) * (len + 1));

if (new_str == NULL)
{
return (NULL);
}
strcpy(new_str, str);
return (new_str);
}
