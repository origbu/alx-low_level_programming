/**
 * main-generates random valid passwords for the program
 *
 * Return:0
 */
#include "stdio.h"
#include "main.h"
#include "stdlib.h"
#include "time.h"

int main(void)
{
	int pass, sum;

	srand(time (NULL));
	sum = 0;
	while (sum < 2645)
	{
		pass = (rand() % 128);
		sum += pass;
		printf("%c", pass);
	}
	printf("%c", 2772, pass);

	return (0);
}
