#include <stdio.h>
#include <ctype.h>
/**
 * main - main block
 * Return:0
 */
int main(void)
{
int x;
for (x = 'A'; x <= 'Z'; x++)
{
int lower_x = tolower(x);
putchar(lower_x);
putchar("\n");
}

return (0);
}
