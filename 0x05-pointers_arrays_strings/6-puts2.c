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
for (n = 1; str[n] != '\0'; n++)
{
while (n % 2 == 0)
{
_putchar(str[n]);
}
}
_putchar('\n');
}
