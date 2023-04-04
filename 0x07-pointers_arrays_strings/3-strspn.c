#include "main.h"

/**
 *_strspn - gets the lenght of a string
 *@s: string to locate
 *@accept: value
 *Return: pointer to string
 */

unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	while (s[i] && accept[i] && s[i] == accept[i])
	{
		i++;
	}
	return i;
}
