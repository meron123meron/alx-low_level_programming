#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * _strdup - a function that returns a pointer to a new string
 * @str: pointer used
 * Return: NULL or pointer
 */
char *_strdup(char *str)
{
int size;
char *p, *n;
if (str == NULL)
{
return (NULL);
}
size = strlen(str);
p = malloc(sizeof(char) * size + 1);
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
