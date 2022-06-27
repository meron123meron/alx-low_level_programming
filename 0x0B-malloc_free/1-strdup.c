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
size = strlen(str);
if (str == NULL)
{
return (NULL);
}
p = malloc(sizeof(char) * size);
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
*n = '\0';
return (p);
}
