#include "main.h"

/**
* is_prime_number - is prime number
* @n: number
*
* Return: 1 if prime number, 0 otherwise
*/
int check_prime(int n, int number);
int is_prime_number(int n)
{
	return (check_prime(n, 2));
}


/**
* check_prime - is prime number
* @n: number
* @number: index to compare if equal
*
* Return: 1 if prime number, 0 otherwise
*/

int check_prime(int n, int number)
{
	if (n <= number && n > 1)
		return (1);
	else if (n <= 1 || n % number == 0)
		return (0);
	else
		return (check_prime(n, number + 1));

}
