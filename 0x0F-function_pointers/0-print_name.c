#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - a function that prints a name
 * @name: argument of the function
 * @f: function pointer
 *
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
f(name);
}
