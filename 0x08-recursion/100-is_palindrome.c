#include "main.h"

/**
* is_palindrome - check if string is palindrome
* @s: string
* @begin: beginning of string
* @end: end of string
*
* Return: 1 if palindrome, 0 otherwise
*/

int check_palindrome(char *s, int begin, int end);

int is_palindrome(char *s)
{

	int len = strlen(s);

	return (check_palindrome(s, 0, len - 1));

}

/**
* check_palindrome - check if string is palindrome
* @s: string
* @begin: beginning of string
* @end: end of string
*
* Return: 1 if palindrome, 0 otherwise
*/

int check_palindrome(char *s, int begin, int end)
{

	if (begin >= end)
		return (1);
	else if (s[begin] != s[end])
		return (0);

	return (check_palindrome(s, begin + 1, end - 1));

}
