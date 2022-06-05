#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * print numbers 0-9 and a-f
 * Return:0
 */
int main(void)
{
int h;
for (h = 48; h < 58; h++)
{
putchar(h);
}
for (h = 97; h < 103; h++)
{
putchar(h);
}

putchar('\n');
return (0);
}
