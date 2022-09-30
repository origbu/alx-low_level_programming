/**
 * factorial-a function that returns the factorial of a given number
 * @n:number to get it's factorial
 *
 * Return:factorial of n or -1 if n is negative.
 */
#include "main.h"

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return (n);
	else
	return (n * factorial(n - 1));
}
