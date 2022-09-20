/**
 * _strlen-a function that returns the length of a string
 * @s:character variable
 *
 * Return:lenght of the string
 */
#include "main.h"

int _strlen(char *s)
{
	int len = 1, sum = 0;
	char pl = s[0];

	while (pl != '\0')
	{
		sum++;
		pl = s[i++];
	}
	return (sum);
}
