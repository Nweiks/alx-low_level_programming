#include "main.h"

/**
*_strlen - lenght of string
*str: char
*len: int
*@s: value
*Return: n 
*/

int _strlen(char *s)
{
int n = 0;

while(*s != '\0')
{
n++;
s++;
}
return (n);
}
