#include <stdlib.h>
#include <stdio.h>

/**
 *main - maint string
 *@argc: counter
 @argv: vector
 *Return: 0 or 1 if statement are not up to 3
 */

int main(int argc, char *argv[])
{
	int i, j;

	if (argc == 3)
{
i = atoi(argv[1]);
j = atoi(argv[2]);
printf("%d\n", i * j);
}
else
{
	printf("Error\n");
	return (1);
}
return (0);
}
