#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: integer
 * Return: some number
 */
int _sqrt_recursion(int n)
{
int z = 0;
if (n == 0 || n == 1)
{
return (n);
}
else if (z * z == n)
{
return (z);
}
else if (n < 0)
{
return (-1);
}
else if (z * z < n || z < n)
{
z++;
_sqrt_recursion(n);
}
return (-1);
}
