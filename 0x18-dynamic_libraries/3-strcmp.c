#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: pointer used
 * @s2: pointer used
 * Return:0
 */
int _strcmp(char *s1, char *s2)
{
int i = 0;
while (s1[i] == s2[i])
{
if (s1[i] == '\0' && s2[i] == '\0')
break;
i++;
}
return (s1[i] - s2[i]);
}
