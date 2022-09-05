#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: pointer used
 * @c: character used
 * Return: a pointer
 */
char *_strchr(char *s, char c)
{
int i = 0;
while (i < c)
{
if (s[i] == c)
{
i++;
}
else
{
return (0);
}
}
return (s);
}
