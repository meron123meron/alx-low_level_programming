#include "main.h"
/**
 * print_rev - prints a string in reverse
 * @s: is a pointer
 *
 * Return:0
 */
void print_rev(char *s)
{
int n = 0;

while (s[n] != '\0')
{
n++;
}
n--;
for ( ; n >= 0; n --)
{
_putchar(s[n]);
}
_putchar('\n');
}
