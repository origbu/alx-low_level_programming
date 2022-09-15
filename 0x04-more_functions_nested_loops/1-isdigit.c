#include "main.h"

/**
 * _isdigit-for a digit (0 through 9)
 * @c:single output character
 *
 * Return:1 if int c is a digit, 0 if otherwise
 */
int _isdigit(int c)
{
	if ((c >= '0') && (c <= '9'))
		return (1);
	else
		return (0);
}
