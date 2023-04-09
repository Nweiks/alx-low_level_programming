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
if (argc != 3)
{
printf("Error\n");
return (1);
}
int i;
int j;
int mul;

i = atoi(argv[1]);
j = atoi(argv[2]);
mul = i * j;
printf("%d\n", mul);
return (0);
}
