/**
 * _strcmp-a function that compares two strings
 * @s1:first string to be compared
 * @s2:second string to be compared
 *
 * Return:R
 */
#include "main.h"

int _strcmp(char *s1, char *s2)
{
	int i;
	int R;

	int i = 0;

	while (s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
	{
		i++;
	}
	R = s1[i] - s2[i];
	return (R);
}
