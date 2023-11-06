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

	if (!d)
		return;

	if (!d->name)
		return (NULL);

	if (d->age == -1)
		return (NULL);

	if (!d->owner)
		return (NULL);

	d->name = name;
	d->age = age;
	d->owner = owner;

	return (d);

}
