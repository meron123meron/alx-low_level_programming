#include <stdio.h>
#include "main.h"
/**
 * main - main block
 * print_alphabet_x10 - prints alphabet 10 times in different lines
 * Return:void
 */
void print_alphabet_x10(void)
{
int y, z;
for (y = 1; y <= 10; y++)
{
for (z = 'a'; z <= 'z'; z++)
{
_putchar(z);

}
_putchar('\n');
}
}
