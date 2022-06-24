#include <stdio.h>
#include "main.h"
/**
 * main - prints the number of arguments
 * @argc: number of arguments
 * @argv: array
 * Return: some value
 */
int main(int argc, char *argv[])
{
(void)argv;
printf("%d\n", argc - 1);
return (0);
}
