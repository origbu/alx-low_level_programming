/**
 * _strncat-a function that concatenates two strings
 * @n:max numbers to be appended
 * @dest:pointer to the destination array
 * @src:string to be appended
 *
 * Return:dest
 */
#include "main.h"

char *_strncat(char *dest, char *src, int n)
{
	int m, i;

	m = 0;

	for (i = 0; i < 1000; i++)
	{
		if (dest[i] == '\0')
		{
			break;
		}
		m++;
	}
	for (i = 0; src[i] != '\0' && < n; i++)
	{
		dest[m + i] = src[i];
	}
	dest[m + i] = '\0';
	return (dest);
}
