#include <stdio.h>
#include "main.h"
/**
 * main - prints all arguments
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
