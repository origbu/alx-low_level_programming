#include <stdio.h>

/**
 * main-a program that prints its name, followed by a new line
 * @argc:counts the number of arguments passed to main
 * @argv:pointer to the arrays of arguments passsed
 * to main function
 *
 * Return:0
 */

int main(argc, (char *argv[]))
{
	int i;
	
	for (i = 0; i < argc; i++)
		printf("%s\n", argv[0]);
	return (0);
}
