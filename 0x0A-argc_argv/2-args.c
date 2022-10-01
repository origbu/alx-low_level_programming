/**
 * main- a program that prints all arguments it receives
 * @argc:argument counter
 * @argv:argument vector
 *
 * Return:0
 */

#include <stdio.h>

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		print("%s\n", argv[i]);
	return (0);
}
