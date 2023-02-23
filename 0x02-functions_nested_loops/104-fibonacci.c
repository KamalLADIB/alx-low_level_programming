#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int d, i;
unsigned long int a, b, c;
unsigned long int h10, h11, h20, h21, h30, h31;
a = 1;
b = 2;
d = 92;
printf("%lu, %lu", a, b);
for (i = 2; i < d; i++)
{
c = b + a;
printf(", %lu", c);
a = b;
b = c;
}
h10 = a % 100000000000000;
h11 = a / 100000000000000;
h20 = b % 100000000000000;
h21 = b / 100000000000000;
for (i = 0; i < 5; i++)
{
h30 = h10 + h20;
if (h30 > 99999999999999)
{
h30 = h30 % 100000000000000;
h31 = h11 + h21 + 1;
}
else
h31 = h11 + h21;
printf(", %lu%lu", h31, h30);
h10 = h20;
h11 = h21;
h20 = h30;
h21 = h31;
}
printf("\n");
return (0);
}
