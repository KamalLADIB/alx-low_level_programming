#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'the program's description'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{

int i, j, k;

for (i = 48; i < 56; i++)
{
for (j = i + 1; j < 57; j++)
{
for (k = j + 1; k < 58; k++)
{
putchar(i);
putchar(j);
putchar(k);
if (i != 55)
{
putchar(44);
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
