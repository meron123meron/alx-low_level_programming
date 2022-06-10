#include "main.h"
/**
 * print_triangle - prints a triangle
 * @size:is the size of the triangle
 * Return:some number
 */
void print_triangle(int size)
{
int a, b;
for (a = 0; a < size; a++)
{
for(b = 0; b < a; b--)
{
_putchar(' ');
}
_putchar(35);
_putchar('\n');
}
_putchar('\n');
}
