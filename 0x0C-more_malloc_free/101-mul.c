#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
*main - multiplies two numbers
*@arc: counter
*@argv: vector
*Return: 99
*/

int main(int argc, char *argv[])
{
int num1, num2, mul, i;

if (argc != 3)
{
printf("Error\n");
return (98);
}
else 
{
num1 = atoi(argv[1]);
num2 = atoi(argv[2]);
printf("%d\n", num1 * num2);
}
if (!isdigit(argv[1][2]))
{
printf("Error\n");
return (98);
}
return (0);
}
