#include "dog.h"
#include <stdio.h>
/**
 * print_dog - is a function that prints a struct
 * struct dog - is a struct with 3 members
 * @d: is a pointer and the first member of the struct
 * Description:
 */
void print_dog(struct dog *d)
{
if (d)
{
printf("Name: %s\n", d->name ? d->name : "(nil)");
printf("Age: %f\n", d->age);
printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
}
else
{
printf(" ");
}
}
