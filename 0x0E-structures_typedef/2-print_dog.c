#include "dog.h"
#include <stdio.h>
/**
 * print_dog - is a function that prints a struct
 * struct dog - is a struct with 4 members
 * @d: is a pointer and the first member of the struct
 * Description:
 */
void print_dog(struct dog *d)
{
if (d)
{
printf("Name: %s\n", d->name);
printf("Age: %f\n", d->age);
printf("Owner: %s\n", d->owner);
}
if (d->name == NULL)
{
printf("Name: (nil) ");
}
if (d->age == 0.00)
{
printf("Age: (nil) ");
}
if (d->owner == NULL)
{
printf("Owner: (nil) ");
}
if (d == NULL)
{
printf(" ");
}
}
