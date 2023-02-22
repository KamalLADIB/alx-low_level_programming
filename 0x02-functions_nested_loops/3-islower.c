#include "main.h"
/**
 * _islower  - Entry point
 * @c: single letter input
 * Return: 1 if c is lower case and 0 otherwise
 */

int _islower(int c)
{
if (c > 96 && c < 123)
return (1);
else
return (0);
}
