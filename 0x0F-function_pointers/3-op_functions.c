#include <stdio.h>
#include "3-calc.h"
/**
 * op_add - adds two numbers
 * @a: number 1
 * @b: number 2
 * op_sub - subtracts two numbers
 * op_mul - multiplicates two numbers
 * op_div - divides two numbers
 * op_mod - gives the remainder after division
 *
 * Return: integer value
 */
int op_add(int a, int b)
{
return ((a) + (b));
}
int op_sub(int a, int b)
{
return ((a) -(b));
}
int op_mul(int a, int b)
{
return ((a) * (b));
}
int op_div(int a, int b)
{
return (a / b);
}
int op_mod(int a, int b)
{
return (a % b);
}
