#include "main.h"
#include <stdio.h>
/**
 * main - prints its name
 * @argc: number of arguments
 * @argv: array
 * Return: some value
 */
int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
