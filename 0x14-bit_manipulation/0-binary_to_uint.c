#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer
 * Return: unsigned int value or 0
 */
unsigned int binary_to_uint(const char *b)
{
int i = 0, len, j, sum = 0;
len = strlen(b);
if (b == NULL)
return (0);
else if (b[i] != 0 || b[i] != 1)
return (0);
else
{
for (j = (len - 1); j >= 0; j--, i++)
{
if (b[i] == 1)
{
sum = sum + power(2, j);
}
}
}
return (sum);
}
/**
 * power - calculates the result of a number raised to some power
 * @a: base
 * @b: exponent
 * Return: the result
 */
unsigned int power(unsigned int a, unsigned int b)
{
int i, p =1;
for (i = b; i > 0; i--)
{
p = p * a;
}
return (p);
}
