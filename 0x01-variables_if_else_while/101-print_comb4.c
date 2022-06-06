#include <stdio.h>
/**
 * main
 * print 012, 013, 
 * Return:0
 */
int main(void)
{
int a, b, c;
for (a = 48 ; a <= 55 ; a++)
{
for (b = 49 ; b <=56 ; b++)
{
for (c = 50 ; c <=57 ; c++)
{
if((a < b) || (a < c) || (b < c))
{
putchar(a);
putchar(b);
putchar(c);
if((a < 55) || (b < 56) || (c < 57))
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);

}
