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
va_start(args, n);
if (separator != NULL)
{
for (i = 0; i < n; i++)
{
i = va_arg(args, int);
printf("%d%s", i, separator);
}
printf("\n");
}
else
printf(" ");
va_end(args);
}
