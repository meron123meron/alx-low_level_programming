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
char *x;
int k;

char *separator = ", ";
unsigned int n = 0;
va_start(args, format);
for (i = 0; i < n; i++)
{
k = va_arg(args, int);
x = va_arg(args, char *);
if (x == NULL)
printf("(nil)");
else
{
if (i < (n - 1))
{
printf("%d%s", k, separator);
printf("%s%s", x, separator);
}
else
printf("%s", x);
}
}
printf("\n");
va_end(args);
}
