/**
 * main-a program that adds positive numbers
 * @argc:argument counter
 * @argv:argument vector
 *
 * Return:0 if suceesful
 * 1 if the number contains symbols
 */

#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
	int i, j, add = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]));
			{
				printf("Error\n");
				return (1);
			}
			add += adoi(argv[i]);
		}
		printf("%d\n", add);
		return (0);
	}
}
