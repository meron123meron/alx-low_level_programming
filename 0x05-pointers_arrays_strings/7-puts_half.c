#include "main.h"
/**
 * puts_half - prints the last half of a strig
 * @str: character used
 *
 * Return:0
 */
void puts_half(char *str)
{
int i;
while (str[i] != str[i / 2])
{
i++;
}
for (; i != '\0'; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
