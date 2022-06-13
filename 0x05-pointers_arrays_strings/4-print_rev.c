#include "main.h"
/**
 * print_rev - prints a string in reverse
 * @s: is a pointer
 *
 * Return:0
 */
void print_rev(char *s)
{
int z;
for (z = 62; z >= 0; z--)
{
_putchar(s[z]);
}
_putchar('\n');
}
