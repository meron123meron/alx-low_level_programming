#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - main function
 *
 */
int main(void)
{
char *ops = "+";
get_op_func(ops);
printf("%d\n", atoi(ops));
return (0);
}
