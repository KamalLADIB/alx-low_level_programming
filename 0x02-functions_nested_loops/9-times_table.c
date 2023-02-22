#include "main.h"
/**
 * times_table  - Entry point
 *
 * Return: nothing.
 *
 */

void times_table(void)
{
int a, b, c;

for (a = 0; a < 10; a++)
{
c = 0;
for (b = 0; b < 10; b++)
{
if (c < 10)
{
putchar(' ');
putchar(' ');
putchar(c + '0');
}
else
{
putchar(' ');
putchar(c / 10 + '0');
putchar(c % 10 + '0');
}
putchar(44);
c += a;
}
putchar('\n');
}
}
