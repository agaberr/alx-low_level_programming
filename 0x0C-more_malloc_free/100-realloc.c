#include "main.h"

/**
* _realloc -  reallocates a memory block using malloc and free
* @ptr: a pointer to the memory previously allocated
*  with a call to malloc: malloc(old_size)
* @old_size: the size, in bytes, of the allocated space for ptr
* @new_size: the new size, in bytes of the new memory block
* Return: pointer to the allocated memory
*/


void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{

	unsigned int size;

	void *new_ptr;

	if (old_size == new_size)
		return (ptr);

	if (!ptr)
		return (malloc(new_size));

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	size = (old_size < new_size) ? old_size : new_size;
	new_ptr = malloc(new_size);

	if (!new_ptr)
		return (NULL);

	memcpy(new_ptr, ptr, size);
	free(ptr);

	return (new_ptr);

}
