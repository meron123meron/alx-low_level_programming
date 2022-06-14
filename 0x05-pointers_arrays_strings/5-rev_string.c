#include "main.h"
/**
 * rev_string - prints a reverse string
 * @s: a pointer used
 *
 * Return:0
 */
void rev_string(char *s)
{
int i;
{
for (i = 0; s[i] != '\0'; i++)
_putchar(s[i]);
}
while (s[i] != '\0')
{
i++;
}
i--;
_putchar('\n');
for (; i >= 0; i--)
{
_putchar(s[i]);
}
}
