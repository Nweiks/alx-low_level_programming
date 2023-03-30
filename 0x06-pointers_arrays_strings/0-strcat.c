#include "main.h"

/**
 *_strcat - main string
 *@src: string 1
 *@dest: string 2
 *Return: 0
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	for (i = 0; dest[i] != '\0'; i++)
		for (j = 0; src[j] != '\0'; j++)
		{
			dest[i] = src[j];
		}
	dest[i] = '\0';

	return (dest);
}
