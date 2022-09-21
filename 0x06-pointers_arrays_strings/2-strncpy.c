/**
 * _strncpy-a function that copies a string
 * @n:number of characters to be copied
 * @src:string to be copied
 * @dest:destination array
 *
 * Return:dest
 */
#include "main.h"

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[i] = src[i];
	}

	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
