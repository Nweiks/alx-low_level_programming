  nclude <stdlib.h>
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

int num1 = atoi(argv[1]);
int num2 = atoi(argv[2]);

if (num1 == 0 || num2 == 0)
{
printf("Error\n");
return (1);
}
int result = num1 * num2;
printf("%d\n", result);

return (0);
}
