#include "main.h"
/**
 * leet - encodes a string in to 1337
 * @n: pointer used
 * Return: some value
 */
char *leet(char *n)
{
int i = 0;
while (n[i] != '\0')
{
if (n[i] == 'a' && n[i] == 'A')
{
_putchar(4);
}
else if (n[i] == 'e' && n[i] == 'E')
{
_putchar(3);
}
else if (n[i] == 'o' && n[i] =='O')
{
_putchar(0);
}
else if (n[i] == 't' && n[i] == 'T')
{
_putchar(7);
}
else if (n[i] == 'l' && n[i] == 'L')
{
_putchar(1);
}
else
{
n[i] = n[i] - 30;
}
i++;
}
return (n);
}
