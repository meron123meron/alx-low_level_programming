#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: NULL or pointer
 */
char *str_concat(char *s1, char *s2)
{
int size;
char *p;
strcat(s1, s2);
size = strlen(s1);
p = (char *)malloc(sizeof(char) * size + 1);
if (p == NULL)
{
return (NULL);
}

while (*s1)
{
*p = *s1;
p++;
s1++;
}

return (p);
}
