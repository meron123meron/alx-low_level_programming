#include <stdio.h>
#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index
 * @n: the number
 * @index: is the index, starting from 0 of the bit you want to get
 * Return: the value of the bit or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
int s = dtob(n);
int *r = &s;
int d = *(r + index);
if (d != 0 && d != 1)
{
return (-1);
}
return (d);
}
/**
 * dtob - converts decimal to binary number
 *
 */
int dtob(unsigned int n)
{
unsigned int s = 0;
int rem, i = 1;
while (n != 0)
{
rem = n % 2;
n = n / 2;
s = s + rem * i;
i = i * 10;
}
return (s);
}
