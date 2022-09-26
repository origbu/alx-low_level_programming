#include "main.h"

/**
 * _memset-a function that fills memory with a constant byte
 * @s:memory to be filled
 * @b:char to copy
 * @n:number of times to copy b
 *
 * Return:a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int size = n;

	if (size > 0)
	{
	int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	}
	return (s);
}
