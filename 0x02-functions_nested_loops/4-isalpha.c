#include <stdio.h>
#include "main.h"
/**
 * _isalpha - checks if c if lowercase or uppercase
 * @c:is character used
 * Return:0 or 1
 */
int _isalpha(int c)
{
if (c >= 97 && c <= 122) 
{
return (1);
}
else

{
return (0);
}
if (c >= 65 && c <= 90)
{
return (1);
}
else
{
return (0);
}

}
