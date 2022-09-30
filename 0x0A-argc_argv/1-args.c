/**
 * main-a program that prints the number of arguments passed into it.
 * @argc:argument counter
 * @argv:pointer to arguments passed to main
 *
 * Return:0
 */

#include <stdio.h>

int main(int argc, char **argv)
{
	int i;
	
	for ( i = 1; i < argc; i++)
		printf("%d\n", i);
	return (0);
}
