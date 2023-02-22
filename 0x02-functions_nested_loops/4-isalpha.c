#include "main.h"
/**
 * _isalpha  - Entry point
 * @c: single letter input
 * Return: 1 if c is lower case and 0 otherwise
 */

int _isalpha(int c)
{
if ((c > 96 && c < 123) || (c > 64 && c < 91))
return (1);
else
return (0);
}
