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
int n;

if (n < 1024)
{
int sum, r, f, t, i;

sum = 0;
f = 0;
t = 0;
r = 5;
while (r < n)
{
f++;
r += 5;
}

r = 3;
while (r < n)
{
t++;
r += 3;
}

for (i = 1; i < f + 1; i++)
sum += i * 5;

for (i = 1; i < t + 1; i++)
sum += i * 3;
printf("%d\n", sum);
}
return (0);
}
