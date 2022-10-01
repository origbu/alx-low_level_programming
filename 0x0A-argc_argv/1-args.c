/**
 * main-a program that prints the number of arguments passed into it.
 * @argc:argument counter
 * @argv:pointer to arguments passed to main
 *
 * Return:0
 */

#include <stdio.h>

int main(int argc, char *argv)
{
<<<<<<< HEAD
		printf("%d\n", argc);
=======
	if (argc > 0)
		printf("%d\n", argc - 1);
>>>>>>> 616e64183d346f2580fff9a62841528a53f2eb78
	return (0);
}
