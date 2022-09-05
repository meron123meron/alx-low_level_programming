#include "main.h"
/**
 * _strncpy - copies a string
 * @dest: pointer used
 * @src: pointer used
 * @n: integer used
 * Return: some value
 */
char *_strncpy(char *dest, char *src, int n)
{
for (n = 0; src[n] != '\0'; n++)
{
dest[n] = src[n];
}
dest[n] = '\0';
return (dest);
}
