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
int d = n >> index;
if (d != 0 && d != 1)
{
return (-1);
}
return (d);
}
