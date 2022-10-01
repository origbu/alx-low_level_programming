/**
 * main-a program that multiplies two numbers
 * @argc:argument counter
 * @argv:argument vector
 *
 * Return:0 if sucessful, else 1 if no argument
 */
#include <stdio.h>
#include "main.h"

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (0);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
