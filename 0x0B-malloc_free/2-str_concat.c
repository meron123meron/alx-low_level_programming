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
int j = 0, i = 0, n;
unsigned int x;
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

for (x = 0; s1[x] != '\0'; x++)
{
p[x] = s1[x];
}
for (n = 0; s2[n] != '\0'; x++)
{
p[x] = s2[n];
n++;
}
return (p);
}
