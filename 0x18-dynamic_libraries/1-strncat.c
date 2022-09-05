#include "main.h"
/**
 * _strncat - concatenates two strings
 * @dest: pointer used
 * @src: pointer used
 * @n: integer for bytes
 * Return: some value
 */
char *_strncat(char *dest, char *src, int n)
{
int  x = 0, y = 0, z;
while (dest[x] != '\0')
{
x++;
}
while (src[y] >= n)
{
y++;
}
for (z = 0; z <= n; z++)
{
dest[x + z] = src[z];
}
return (dest);
}
