#include <stdio.h>
/**
 * main - prints numbers
 * Return:0
 */
int main(void)
{
int a = 1;
printf("%d", a);
putchar(32);
for (a = 2; a <= 100; a++)
{

if ((a % 3 == 0) && (a % 5 == 0))
{
printf("FizzBuzz");
putchar(32);
}
else if (a % 5 == 0)
{
printf("Buzz");
putchar(32);
}
else if (a % 3 == 0)
{
printf("Fizz");
putchar(32);
}
else
{
printf("%d", a);
putchar(32);
}
}

putchar(10);
return (0);
}
