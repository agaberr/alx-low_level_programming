#include "dog.h"
/**
* init_dog - initialize dog struct with values
* @d: dog struct
* @name: dog name
* @age: dog age
* @owner: dog owner name
*
* Return: None
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{

	if (!d)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;

}
