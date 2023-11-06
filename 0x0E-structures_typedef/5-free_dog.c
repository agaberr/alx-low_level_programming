#include "dog.h"
/**
* free_dog - free dog struct from heap
* @d: dog struct
*
* Return: None
*/

void free_dog(dog_t *d)
{

	if (!d)
		return;

	free(d->name);
	free(d->owner);
	free(d);

}
