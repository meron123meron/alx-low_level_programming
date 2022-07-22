#include <stdio.h>
#include "main.h"
/**
 * print_binary - prints the binary representation of a number
 * @n: the number
 * Return: Nothing
 */
void print_binary(unsigned long int n)
{
unsigned long int s = 0;
unsigned long int re, i = 1;
while (n != 0)
{
re = n % 2;
n = n / 2;
s = s + re * i;
i = i * 10;
}
_putchar(s);
}
