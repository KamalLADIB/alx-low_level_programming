#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */

/**
 * main - Entry point
 *
 * Description: 'the program's description'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	int t = n % 10;

	printf("Last digit of %d is %d ", n, t);
	if (t > 5)
		printf("and is greater than 5\n");
	else if (t == 0)
		printf("and is 0\n");
	else
		printf("and is less than 6 and not 0\n");
	return (0);
}
