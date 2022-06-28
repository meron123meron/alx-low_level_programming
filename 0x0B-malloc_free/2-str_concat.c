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
int j = 0, i = 0, n;
char *p = NULL;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
for (; s1[i] != '\0'; i++)
for (; s2[j] != '\0'; j++)

p = (char *)malloc(sizeof(char) * (i + j + 1));
if (p == NULL)
{
return (NULL);
}

for (i = 0; s1[i] != '\0'; i++)
{
p[i] = s1[i];
}
for (n = 0; s2[n] != '\0'; i++, n++)
{
p[i] = s2[n];
}
return (p);
}
