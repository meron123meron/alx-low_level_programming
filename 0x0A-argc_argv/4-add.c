#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"
/**
 * main - adds positive numbers
 * @argc: number of arguments
 * @argv: array
 * Return: some value
 */
int main(int argc, char *argv[])
{
int i, n, sum = 0;
if (argc == 1)
{
printf("0\n");
}
else if (argc > 2)
{
for (i = 1; i < argc; i++)
{
char *p = argv[i];
int strLength = strlen(p);
for (n = 0; n < strLength; n++)
{
if (isdigit(*(p + n)) == 0)
{
printf("Error\n");
return (1);
}
}
sum = sum + atoi(argv[i]);
}
printf("%d\n", sum);
}
return (0);
}
