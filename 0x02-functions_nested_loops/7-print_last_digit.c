#include "main.h"
/**
 * print_last_digit  - Entry point
 * @n: single number input
 * Return: the last digit of a number.
 *
 */

int print_last_digit(int n)
{
int a;

a = n % 10;
_putchar(a);
return (a);
}
