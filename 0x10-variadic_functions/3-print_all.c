#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_all - prints anything
 * @format: pointer
 *
 * Return: Nothing
 */
void print_all(const char * const format, ...)
{
va_list args;
unsigned int i;
char *separator = ", ";
unsigned int n = 0;
va_start(args, n);
for (i = 0; i < n; i++)
{
format = va_arg(args, int);
format = va_arg(args, char);
format = va_arg(args, char *);
if (format == NULL)
printf("(nil)");
else
{
if (i < (n - 1))
printf("%s%s", format, separator);
else
printf("%s", format);
}
}
printf("\n");
va_end(args);
}
