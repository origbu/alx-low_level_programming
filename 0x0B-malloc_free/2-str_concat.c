#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * str_concat-a function that concatenates two strings.
 * @s1:pointer to first string
 * @s2:pointer to second string
 *
 * Return:NULL on failure otherwise address of new allocated
 * space in memeory for s1 and s2
 */

char *str_concat(char *s1, char *s2)
{
	char *s;
	unsigned int i, j, k, l;

	if (s1 == NULL)
		i = 0;
	else
	{
		for (i = 0; s1[i]; i++)
			;
		}
		if (s2 == NULL)
			j = 0;
		else
		{
			for (j = 0; s2[j]; j++)
				;
		}
		k = i + j + 1;
		s = malloc(k * sizeof(char));
		if (s == NULL)
			return (NULL);
		for (l = 0; l < i; l++)
			s[l] = s1[l];
		for (l = 0; l < j; l++)
			s[l + i] = s2[l];
		s[i + j] = '\0';
		return (s);
	}
