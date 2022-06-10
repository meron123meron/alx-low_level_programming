#include "main.h"
/**
 * print_diagonal - draws a diagonal line
 * @n:is number of times \ is printed
 * Return:0
 */
void print_diagonal(int n)
{
int a, b;
for (a = 0; a < n; a++)
{
_putchar(92);
_putchar('\n');

for (b = 0; b < a; b++)
{
_putchar(32);
}
}
_putchar('\n');
}
