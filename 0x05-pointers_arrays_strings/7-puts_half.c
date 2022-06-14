#include "main.h"
/**
 * puts_half - prints the last half of a strig
 * @str: character used
 *
 * Return:0
 */
void puts_half(char *str)
{
int i = 0;
int n = i - 1;
while (str[i] != str[i / 2])
{
i++;
for (; i != '\0'; i++)
_putchar(str[i]);
}
while (i % 2 != 0)
{
while (str[i] != str[n / 2])
{
i++;
for (; i != '\0'; i++)
_putchar(str[i]);
}
}
_putchar('\n');
}
