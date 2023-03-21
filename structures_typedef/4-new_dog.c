#include <stdlib.h>
#include <string.h>
#include "dog.h"
/**
 * new_dog - creates a new dog.
 * @name: pointer to a char for name of dog
 * @age: age of dog
 * @owner: pointer to a char for owner of dog
 * Return: pointer to a new dog of type dog_t
 **/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
		return (NULL);

	if (name == NULL || owner == NULL || age < 0)
		return (NULL);

	new_dog->name = (char *) malloc(strlen(name) + 1);
	new_dog->owner = (char *) malloc(strlen(owner) + 1);

	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}

	new_dog->name = strcpy(new_dog->name, name);
	new_dog->age = age;
	new_dog->owner = strcpy(new_dog->owner, owner);

return (new_dog);
}
