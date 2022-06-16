#include "main.h"
/**
 * cap_string - capitilizes all words of a string
 * @n: pointer used
 * Return: some value
 */
char *cap_string(char *n)
{
int i;
for (i = 0; n[i] != '\0'; i++)
{
if (i == 0)
{
if (n[i] >= 'a' && n[i] <= 'z')
{
n[i] = n[i] - 32;
}
}
if (n[i] == ' ' && n[i] == ',' && n[i] == '?' && n[i] == '!' && n[i] == '\n')
{
++i;
if (n[i] >= 'a' && n[i] <= 'z')
{
n[i] = n[i] - 32;
}
}
}
return (n);
}
