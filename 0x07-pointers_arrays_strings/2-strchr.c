#include "main.h"

/**
 *_strchr - locates a string 
 *@s: string to search
 *@c: target character
 *Return: pointer to c or NULL
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
	return (NULL);
}
