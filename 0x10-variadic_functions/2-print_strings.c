#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings - a function that prints strings
 * @separator: pointer
 * @n: number of strings
 *
 * Return: Nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list args;
unsigned int i;
char *x;
va_start(args, n);
for (i = 0; i < n; i++)
{
x = va_arg(args, char *);
if (x == NULL)
printf("(nil)\n");
else
{
if (separator != 0 && i < (n - 1))
printf("%s%s", x, separator);
else
printf("%s", x);
}
}
printf("\n");
va_end(args);
}
