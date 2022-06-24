#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array
 * Return: some value
 */
int main(int argc, char *argv[])
{
if (argc == 3)
{
int a = atoi(argv[1]) * atoi(argv[2]);

printf("%d\n", a);
}
else
{
printf("Error\n");
}
return (1);
}
