#include <stdio.h>
/**
 * main - main block
 * Return:0
 */
int main(void)
{
int x = 0;
while (x < 10)
{
putchar(48 + x);
putchar('\n');
x++;
}
putchar('\n');
return (0);
}
