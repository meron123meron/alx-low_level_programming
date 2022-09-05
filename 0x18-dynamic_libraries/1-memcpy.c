#include "main.h"
/**
 * _memcpy - copies memory area
 * @dest: pointer used
 * @src: pointer used
 * @n: bytes
 *
 * Return: a pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
return (dest);
}
