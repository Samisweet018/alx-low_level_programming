#include "main.h"

/**
 * _isdigit - Check for a digit
 * @c:The char to be checked
 * Return: 1 for digit character or 0 for anything else
 */

int _isdigit(int c)
{
if (c >= '0' && c <= '9')
{
return (1);
}
return (0);
}
