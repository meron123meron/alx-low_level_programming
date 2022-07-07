#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - a function that prints numbers
 * @separator: pointer that can not be dereferenced
 * @n: number of arguments
 *
 * Return: Nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list args;
unsigned int i;
int x;
va_start(args, n);
for (i = 0; i < n; i++)
{
x = va_arg(args, int);
if (separator != 0 && i < (n - 1))
printf("%d%s", x, separator);
else
printf("%d", x);
}
printf("\n");
va_end(args);
}
