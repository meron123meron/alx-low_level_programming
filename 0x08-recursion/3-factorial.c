#include "main.h"
/**
 * factorial - returns the factorial of a number
 * @n: integer
 * Return: some value
 */
int factorial(int n)
{
int a;
if (n < 0)
{
return (-1);
}
else if (n == 0)
{
return (1);
}
a = n * factorial(n - 1);
return (a);
}
