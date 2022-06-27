#include <stdlib.h>
#include "main.h"
/**
 * _strdup - a function that returns a pointer to a new string
 * @str: pointer used
 * Return: NULL or pointer
 */
char *_strdup(char *str)
{
char *p, *n;
if (str == NULL)
{
return (NULL);
}
p = malloc(sizeof(char) * 6);
if (p == NULL)
{
return (NULL);
}
n = p;
while (*str)
{
*n = *str;
n++;
str++;
}
return (p);
}
