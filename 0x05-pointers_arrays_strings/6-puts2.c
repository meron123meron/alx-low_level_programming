#include "main.h"
/**
 * puts2 - prints the next character or jumps one character when printing
 * @str: is pointer used
 *
 * Return:0
 */
void puts2(char *str)
{
int n = 0;

while (n != '\0')
{
for (; n % 2 == 0; n++)
{
_putchar(str[n]);
}
}
_putchar('\n');
}
