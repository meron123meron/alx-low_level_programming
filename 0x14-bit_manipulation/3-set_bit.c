#include <stdio.h>
#include "main.h"
/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: pointer
 * @index: is the index, starting from 0 of the bit you want to set
 * Return: 1 or -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
int s = 1 << index;
while (index > 32)
{
return (-1);
}
*n = (*n & ~s) | ((1 << index) & s);
return (1);
}
