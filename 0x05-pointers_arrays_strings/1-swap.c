#include "main.h"

/**
*swap_int - swaops two varables
*@a: value 1
*@b: value 2 to be swapped with 1
*Return: void
*/

void swap_int(int *a, int *b)
{
int m;

m = *a;
*a = *b;
*b = m;
}
