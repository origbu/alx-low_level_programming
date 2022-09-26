#include "main.h"

/**
 * _strchr-a function that locates a character in a string
 * @s:string to be scanned
 * @c:character to be searched
 *
 * Return: pointer to the first occurrence of c
 * or NULL if character is not found
 */
char *_strchr(char *s, char c)
{
	int a;

	while (1)
	{
		a = *s++;
		if (a == c)
		{
			return (s - 1);
		}
		if (a == 0)
		{
			return (NULL);
		}
	}
}
