#include "main.h"
/**
 * _strpbrk - searches for a set of bytes
 * @s: pointer used
 * @accept: pointer used
 * Return: a pointer
 */
char *_strpbrk(char *s, char *accept)
{
int x, z;

for (x = 0; *(s + x); x++)
{
for (z = 0; *(accept + z); z++)
{
if (*(s + x) == *(accept + z))
{
return (s + x);
}
}
}
return (0);
}
