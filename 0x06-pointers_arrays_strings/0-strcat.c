#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: pointer used
 * @src: pointer used
 * Return:0
 */
char *_strcat(char *dest, char *src)
{
int x = 0, y = 0, z;
while (dest[x] != '\0')
{
x++;
}

while (src[y] != '\0')
{
y++;
}

for (z = 0; z <= y; z++)
{
dest[x + z] = src[z];
}
return (dest);
}
