#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
unsigned long int a, b, c, d;

a = 1;
b = 2;
d = 2;
c = 0;
while (c < 4000000)
{
c = b + a;
a = b;
b = c;
if (c % 2 == 0 && c < 4000000)
d += c;
}
printf("%lu\n", d);
return (0);
}
