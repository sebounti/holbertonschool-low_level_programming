#include "dog.h"

/**
 * init_dog - initialize a variable of type struct dog
 * @d: pointer to an element of type dog
 * @name: pointer to a char for name of dog
 * @age: age of dog
 * @owner: pointer to a char for owner of dog
 * Return: dog info
 **/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
