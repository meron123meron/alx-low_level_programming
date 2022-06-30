#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"
/**
 * string_nconcat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: bytes of s2
 * Return: NULL or pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *p;
unsigned int i, j = 0;
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
for (i = 0; s1[i] != '\0'; i++)
{

}
if (n >= strlen(s2))
{
n = strlen(s2);
}
p = malloc(sizeof(char) * (i + n + 1));
if (p == NULL)
{
return (NULL);
}
for (i = 0; s1[i] != '\0'; i++)
{
p[i] = s1[i];
}
for (j = 0; j <= n; j++, i++)
{
p[i] = s2[j];
}
return (p);
}
