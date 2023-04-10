#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
*main - multiply numbers
*@argc: count
*@argv: vector
*Return: 0
*/

int main(int argc, char *argv[])
{
int sum = 0;
int i, j;
for (i = 1; i < argc; i++)
{
for (j = 0; argv[i][j]; j++)
{
if (!isdigit(argv[i][j]))
{
printf("Error\n");
return (1);
}
}
int num = atoi(argv[i]);
sum += num;
}
printf("%d\n", sum);
return (0);
}
