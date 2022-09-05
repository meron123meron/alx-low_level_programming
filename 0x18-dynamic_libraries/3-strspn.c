#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: pointer used
 * @accept: pointer used
 * Return: number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
int i;
for (i = 0; i != '\0'; i++)
{
if (s[i] == accept[i])
{
i++;
}
else
{
break;
}
}
return (i);
}
