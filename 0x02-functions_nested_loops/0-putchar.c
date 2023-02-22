#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char message[] = "_putchar";
int MAXSTRING = 100;
int count;

for (count = 0; count < MAXSTRING; count++)
{
if (message[count] == '\0')
{
putchar('\n');
break;
}
else
putchar(message[count]);
}
return (0);
}
