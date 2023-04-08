#include <stdio.h>
#include <stdlib.h>

/**
*main - srg and argc conditions
*@argv: argument vector
*@argc: argument count
*Return: 0 sucess
*/

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
