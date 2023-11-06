#include "dog.h"
/**
* print_dog - print dog values
* @d: dog struct
*
* Return: None
*/

void print_dog(struct dog *d)
{

	if (!d)
		return;

	if (!d->name)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);

	if (!d->age)
		printf("Age: (nil)\n");
	else
		printf("Age: %.6f\n", d->age);

	if (!d->owner)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", d->owner);

}
