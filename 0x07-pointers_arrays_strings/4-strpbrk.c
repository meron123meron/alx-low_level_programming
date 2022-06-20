#include "main.h"
/**
 * _strpbrk - searches for a set of bytes
 * @s: pointer used
 * @accept: pointer used
 * Return: a pointer
 */
char *_strpbrk(char *s, char *accept)
{
int i;
while (s[i] != '\0' || accept[i] != '\0')
{
for (i = 0; s[i] != accept[i]; i++)
{

}
if (s[i] == accept[i])
{
return (s);
i++;
}
}
return (0);
}
