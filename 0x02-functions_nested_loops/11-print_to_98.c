#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - prints numbers from n to 98
 * @n:is the character used
 * Return:0
 */
void print_to_98(int n)
{
if (n <= 98)
{
_putchar(n++);
_putchar(',');
_putchar(' ');
}
else
{
_putchar(n--);
_putchar(',');
_putchar(' ');
}
_putchar('\n');
}
