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
	int i = 0;

	while (s[i] != '\0' && s[i] != c)
		i++;
	if (s[i] == c)
		return (&s[i]);
	else
		return ('\0');
}
