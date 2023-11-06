#include "dog.h"
/**
* new_dog - create dog struct with values
* @name: dog name
* @age: dog age
* @owner: dog owner name
*
* Return: None
*/

dog_t *new_dog(char *name, float age, char *owner)
{

	dog_t *d;

	if (!name || !owner)
		return (NULL);


	d = malloc(sizeof(dog_t));

	if (!d)
		return (NULL);

	d->name = malloc(strlen(name) + 1);
	d->owner = malloc(strlen(owner) + 1);

	if (!name || !owner)
	{
		free(d->name);
		free(d->owner);
		free(d);
		return (NULL);
	}

	strcpy(d->name, name);
	strcpy(d->owner, owner);

	d->age = age;

	return (d);

}
