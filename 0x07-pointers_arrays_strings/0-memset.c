#include "main.h"
/**
 * _memset - fills memory with a constant byte
 * @s: pointer used
 * @b: character used
 * @n: bytes of the memory
 *
 * Return: a pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
char **q;
for (n = 0; n != '\0'; n++)
{
q = &s;
**q = b;
}
return (s);
}
