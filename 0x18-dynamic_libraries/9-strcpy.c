#include "main.h"
/**
 * _strcpy - copies a string
 * @dest: pointer used
 * @src: pointer used
 *
 * Return:some value
 */
char *_strcpy(char *dest, char *src)
{
int i;
for (i = 0; dest[i] != '\0'; i++)
{
_putchar(dest[i]);
}
_putchar('\n');
for (i = 0; src[i] != '\0'; i++)
{
_putchar(src[i]);
}
_putchar('\n');
return (0);
}
