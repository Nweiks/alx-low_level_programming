#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;
	int mine;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	mine = n % 10;
	if (mine > 5)
		printf("last digit of %d is %d and is greater than 5\n", n, mine);
	else if (mine == 0)
		printf("Last digit of %d is %d and is zero\n", n, mine);
	else
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, mine);
	return (0);
}
