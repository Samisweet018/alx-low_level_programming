#include "main.h"

/**
 * _isupper - checks for lowercase char
 * @c: char to check
 * Return: 1 for uppercase char else 0
 */

int _isupper(int c)

{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
