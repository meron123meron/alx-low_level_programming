#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * c0m3.c
 * Return:0
 */
int main(void)
{
int a;
int b;
for (a = 48; a <= 56; a++)
{
for (b = 49; b <= 57; b++)
{
if (a < b)
{
putchar(a);
putchar(b);
if ((a < 56) || (b <57))
{
putchar(44);
putchar(32);
}
}
}
}
putchar(10);
return (0);
}
