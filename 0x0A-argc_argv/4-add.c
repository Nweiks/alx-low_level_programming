#include <stdio.h>
#include <stdlib.h>

/**
 *main - multiply numbers
 *@argc: count
 *@argv: vector
 *Return: 0
 */

int main(int argc, char *argv[])
{
	int i;
	int mul = 0;
	int num;
	int j;

	for (i = 1; i < argc; i++)
	{
for (j = 0; argv[i][j]; j++)
{
		if (!isdigit(argv[i]))
				{
				printf("Error\n");
				return (1);
				}
if (num < 0)
{
printf("Error\n");
return (1);
}
				num = atoi(argv[i]);
				mul += num;
}
}
				printf("%d\n", mul);
				return (0);
}
