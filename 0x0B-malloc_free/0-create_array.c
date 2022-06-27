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

if (size == 0)
{
return (NULL);
}
p = malloc(sizeof(c) * size);
if (p == NULL)
{
return (NULL);
}
return (p);
}
