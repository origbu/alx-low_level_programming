/**
 * factorial-a function that returns the factorial of a given number
 * @n:number to get it's factorial
 *
 * Return:factorial of n
 */
#include "main.h"

int factorial(int n)
{
	if (n == 0)
		return (0);
	n++;
	return (n * factorial(n - 1));
}
