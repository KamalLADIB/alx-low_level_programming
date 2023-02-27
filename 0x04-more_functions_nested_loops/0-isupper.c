#include "main.h"
/**
 * _isupper  - Entry point
 * @c: input number
 *
 * Return: sum of two numbers
 *
 */

int _isupper(int c)
{
int i;

i = 65;
while (i < 91)
{
if (c == i)
return (1);
i++;
}
return (0);
}
