#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - adds positive numbers
 * @argc: number of arguments
 * @argv: array
 * Return: some value
 */
int main(int argc, char **argv)
{
int i = 0, sum = 0;
if (argc > 2)
{
for (i = 0; i < argc; i++)
{
sum = sum + atoi(argv[i]);
printf("%d\n", sum);
}
}
if (i == 1)
{
printf("0\n");
}
else
{
printf("Error\n");
}
return (1);
}
