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
int i;

for (i = 48; i < 58; i++)
{
	putchar(i);
	if (i < 57)
	{
	putchar(44);
	putchar(' ');
	}
}
putchar('\n');
return (0);
}
