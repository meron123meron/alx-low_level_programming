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
char *p = NULL;
int  i = 0, j = 0;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
for (; s1[i] != '\0'; i++)
{
}
for (; s2[j] != '\0'; j++)
{
}
p = (char *)malloc(sizeof(char) * (i + j + 1));
if (p == NULL)
{
return (NULL);
}

for (i = 0; s1[i] != '\0'; i++)
{
p[i] = s1[i];
}
for (j = 0; s2[j] != '\0'; i++, j++)
{
p[i] = s2[j];
}
return (p);
}
