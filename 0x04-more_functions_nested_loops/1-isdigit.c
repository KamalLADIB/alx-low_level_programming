#include "main.h"
/**
 * _isdigit  - Entry point
 * @c: input number
 *
 * Return: sum of two numbers
 *
 */

int _isdigit(int c)
{
int i;

i = 48;
while (i < 58)
{
if (c == i)
return (1);
i++;
}
return (0);
}
