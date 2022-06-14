#include <stdio.h>
#include "main.h"
/**
 * print_array - prints elements of an array
 * @a: character used
 * @n: integer used
 * Return:0
 */
void print_array(int *a, int n)
{
int i = n -1;
for (i = 0; i != '\0'; i++)
{
printf(" %d ", a[i]);
}
printf("\n");
}
