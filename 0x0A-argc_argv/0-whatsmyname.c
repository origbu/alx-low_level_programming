#include <stdio.h>

/**
 * main-a program that prints its name, followed by a new line
 * @argc:counts the number of arguments passed to main
 * @argv:pointer to the arrays of arguments passsed
 * to main function
 *
 * Return:0
 */

int main(argc __atrribute__((unused)), char *argv[])
{
		printf("%s\n", *argv);
	return (0);
}
