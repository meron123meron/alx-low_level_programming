#ifndef DOG_H
#define DOG_H

/**
 * struct dog - is a struct with 3 members
 * @name: first member
 * @age: second member
 * @owner: third member
 * Description:
 */
typedef struct dog
{
char *name;
float age;
char *owner;
} dog;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
