#include "main.h"
/**
 * print_times_table  - Entry point
 * @n: input number
 *
 * Return: void
 *
 */

void print_times_table(int n)
{
int a, b, c;
if (n < 16 && n > -1)
{
for (a = 0; a < n + 1; a++)
{
c = 0;
for (b = 0; b < n + 1; b++)
{
if (c < 10)
{
if (b != 0)
{
_putchar(' ');
_putchar(' ');
_putchar(' ');
}
_putchar(c + '0');
}
else if (c < 100)
{
_putchar(' ');
_putchar(' ');
_putchar(c / 10 + '0');
_putchar(c % 10 + '0');
}
else
{
_putchar(' ');
_putchar(c / 100 + '0');
_putchar((c % 100) / 10 + '0');
_putchar(c % 10 + '0');
}

if (b != n)
_putchar(44);
c += a;
}
_putchar('\n');
}
}
}
