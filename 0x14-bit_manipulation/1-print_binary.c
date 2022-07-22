#include <stdio.h>
#include "main.h"
/**
 * print_binary - prints the binary representation of a number
 * @n: the number
 * Return: Nothing
 */
void print_binary(unsigned long int n)
{
unsigned long int r;
int s;
for (s = 10; s >= 0; s--)
{
r = n >> s;
if (r & 1)
_putchar('1');
else
_putchar('0');
}
}
