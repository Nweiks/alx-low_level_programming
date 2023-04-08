#include <stdio.h>
#include <stdlib.h>

/**
 *main - print argc
 *@argc: count
 *@argv: vector
 *Return: 0
 */

int main(int argc, char *argv[])
{
int i;
int count = 0;

for (i = 0; i < argc; i++)
{
count++;
}
	printf("%d\n", count - 1);
	return (0);
}
