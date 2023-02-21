#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char string[] = "and that piece of art is useful\"";
char string1[] = " - Dora Korpar, 2015-10-19";
int x;

x = 0;
putchar(34);
while (string[x])
{
putchar(string[x]);
x++;
}
x = 0;
while (string1[x])
{
putchar(string1[x]);
x++;
}
putchar('\n');
return (1);
}
