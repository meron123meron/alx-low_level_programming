#include <stdio.h>
#include "main.h"
/**
 * _islower - checks if c is lowercase or not
 * @c:is character 
 * Return:0 or 1
 */
int _islower(int c)
{
if (c >= 97 && c <= 122)

{
_putchar(49);
}

else
{
_putchar(48);
}

return (0);
}
