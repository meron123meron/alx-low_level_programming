#include "main.h"
/**
 * leet - encodes a string in to 1337
 * @n: pointer used
 * Return: some value
 */
char *leet(char *n)
{
int i = 0, z;
char a[] = "aAeEoOtTlL";
char b[] = "4433007711";
while (n[i] != '\0')
{
for (z = 0; z <= 9; z++)
{
if (a[z] == n[i])
{
n[i] = b[z];
}
}
i++;
}
return (n);
}
