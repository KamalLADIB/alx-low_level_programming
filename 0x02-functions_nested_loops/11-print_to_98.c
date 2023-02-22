#include <stdio.h>
#include "main.h"
/**
 * print_to_98  - Entry point
 * @n: input number
 *
 * Return: sum of two numbers
 *
 */

void print_to_98(int n)
{
int i;

if (n <= 98)
{
printf("%d", n);

for (i = n + 1; i < 99; i++)
printf(", %d", i);
}
else
{
printf("%d", n);

for (i = n - 1; i > 97; i--)
printf(", %d", i);
}
}
