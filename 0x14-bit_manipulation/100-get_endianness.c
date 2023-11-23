#include "main.h"
/**
* get_endianness - function that checks the endianness
*
* Return: 0 if big endian, 1 if little endian
*/

int get_endianness(void)
{

	unsigned int var = 1;

	unsigned char *mem = (unsigned char *)&var;

	return (*mem ? 1 : 0);

}
