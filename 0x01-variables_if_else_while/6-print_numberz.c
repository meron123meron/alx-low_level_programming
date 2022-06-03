#include <stdio.h>
/**
 * main - main block
 * Return:0
 */
int main(void)

{
int x;
x = 0;

while (x < 10)
{
putchar(48 + x);
x++;
}

putchar('\n');
return (0);
}
