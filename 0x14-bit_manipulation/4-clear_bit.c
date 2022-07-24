#include <stdio.h>
#include "main.h"
/**
 * clear_bit -  sets the value of a bit to 0 at a given index
 * @n: pointer
 * @index:is the index, starting from 0 of the bit you want to set
 * Return: 1 or -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
int s = 1 << index;
while (index > 32)
{
return (-1);
}
*n = (*n & ~s) | ((0 << index) & s);
return (1);
}
