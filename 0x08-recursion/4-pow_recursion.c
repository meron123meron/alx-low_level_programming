#include "main.h"
/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: integer
 * @y: integer
 * Return: some value
 */
int _pow_recursion(int x, int y)
{
int a;
if (y < 0)
{
return (-1);
}
else if (y == 0)
{
return (1);
}
a = x * _pow_recursion(x, y - 1);
return (a);
}
