#include "main.h"
/**
 * swap_int - swaps the values of two integers
 * @a: is one of the integers
 * @b: is the other integer
 *
 * Return:0
 */
void swap_int(int *a, int *b)
{
int z;
z = *a;
*a = *b;
*b = z;
}
