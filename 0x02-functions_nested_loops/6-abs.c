#include <stdio.h>
#include "main.h"
/**
 * _abs - computes absolute value of an integer
 * @a:is character used
 * Return:0
 */
int _abs(int a)
{
while (a < 0)
{
a = (-1) * a;
}

return (a);
}
