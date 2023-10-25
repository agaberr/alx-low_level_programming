#include "main.h"

/**
* _sqrt_recursion - check if number has sqrt or not
* @n: number
* @currnum: number to compare with
*
* Return: the sqrt of a number, -1 if -ve
*/

int return_sqrt(int n, int currnum);

int _sqrt_recursion(int n)
{
	if (n > 0)
		return (return_sqrt(n, 1));
	else
		return (-1);
}

/**
* return_sqrt - check if number has sqrt or not
* @n: number
* @currnum: number to compare with
*
* Return: the sqrt of a number, -1 otherwise
*/

int return_sqrt(int n, int currnum)
{

	if (currnum * currnum == n)
		return (currnum);
	else if (currnum * currnum > n)
		return (-1);
	else
		return (return_sqrt(n, currnum + 1));

}
