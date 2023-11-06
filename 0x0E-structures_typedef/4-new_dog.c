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

	if (!name || !owner)
		return (NULL);

	dog_t *d = malloc(sizeof(dog_t));

	if (!d)
		return (NULL);

	d->name = strdup(name);
	d->owner = strdup(owner);

	if (!name || !owner)
	{
		free(d->name);
		free(d->owner);
		free(d);
		return (NULL);
	}

	d->age = age;

	return (d);

}
