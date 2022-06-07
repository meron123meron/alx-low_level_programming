#include <stdio.h>
#include "main.h"
/**
 * main - main block
 * Description: print_alphabet - prints alphabets
 * print alphabet
 * Return:0
 */
// prints alphabet in lowercase
void print_alphabet(void)
{
int x;

for (x = 'a'; x <= 'z'; x++)
{
_putchar(x);
}
_putchar('\n');
}
