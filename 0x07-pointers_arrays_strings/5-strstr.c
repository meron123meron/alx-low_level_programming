#include "main.h"
/**
 * _strstr - locates a substring
 * @haystack: pointer used
 * @needle: pointer used
 * Return: a pointer
 */
char *_strstr(char *haystack, char *needle)
{
int i = 0, length = 0, start = 0;
if (haystack[i] != '\0' || needle[i] != '\0')
{
while (i < length)
{
needle[i] = haystack[start + i - 1];
i++;
}
return (needle);
}
return (0);
}
