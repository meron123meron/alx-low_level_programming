#include "main.h"
/**
 * _strlen_recursion - returns length of a string
 * @s: pointer used
 * Return:0
 */
int _strlen_recursion(char *s)
{
int a;
if (*s != '\0')
{
a = 1 + _strlen_recursion(s + 1);
return (a);
}
return (0);
}
