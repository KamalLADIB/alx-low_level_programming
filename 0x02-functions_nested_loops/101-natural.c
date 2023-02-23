#include <stdio.h>
#include "main.h"
/**
 * main  - Entry point
 *
 * Return: void
 *
 */

int main(void)
{
int n, sum;

n = sum = 0;
while (n < 1024)
{
if ((n % 3 == 0) || (n % 5 == 0))
{
sum += n;
}
n++;
}
printf("%d\n", sum);
return (0);
}
