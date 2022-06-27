#include <stdlib.h>
#include "main.h"
/**
 * create_array - creates an array of chars
 * @size: size of the array
 * @c: is a character
 * Return: NULL or a pointer
 */
char *create_array(unsigned int size, char c)
{
char *p;
unsigned int i;
if (size == 0)
{
return (NULL);
}
p = malloc(sizeof(c) * size);
if (p == NULL)
{
return (NULL);
}
else
{
for (i = 0; i < size; i++)
p[i] = c;
}
return (p);
}
