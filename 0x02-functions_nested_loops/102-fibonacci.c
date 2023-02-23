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

a = 1;
b = 2;
d = 50;

printf("%lu, %lu\n", a, b);

for (i = 1; i < d; i++)
{
c = b + a;
printf("%lu, ", c);
a = b;
b = c;
}
printf("\n%d", i);
return (0);
}
