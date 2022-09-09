#include <stdio.h>
/**
 * main - starting of the program
 * sizeof - compile-time unary operator
 *
 * Return: 0 (sucess)
 */
	int main(void)
{
	printf("The size of int is %lu byte(s)\n", sizeof(int));
	printf("The size of char is %lu byte(s)\n", sizeof(char));
	printf("The size of long int is %lu byte(s)\n", sizeof(long int));
	printf("The size of long long int is %lu byte(s)\n", sizeof(long long int));
	printf("The size of float is %lu byte(s)\n", sizeof(float));
	return (0);
}

