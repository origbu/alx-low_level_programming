#include "main.h"

/**
 * _isupper-checks for uppercase character
 * @c:single output character
 *
 * Return:1 if int c is uppercase, 0 if otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
