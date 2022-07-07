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
int i;
va_start(args, n);
i = va_arg(args, int);
if (separator != NULL)
{
printf("%d\n", i);
separator++;
}
else
printf(" ");
va_end(args);
}
