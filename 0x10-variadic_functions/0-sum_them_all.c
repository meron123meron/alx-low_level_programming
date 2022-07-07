#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - a function that returns the sum of n numbers
 * @n: number of arguments
 *
 * Return: integer value
 */
int sum_them_all(const unsigned int n, ...)
{
va_list args;
unsigned int i;
int sum = 0;
va_start(args, n);
for (i = 0; i < n; i++)
{
sum = sum + va_arg(args, int);
}
va_end(args);
return (sum);
}
