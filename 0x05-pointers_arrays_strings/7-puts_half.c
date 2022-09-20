/**
 * puts_half-a function that prints half of a string
 * followed by a new line.
 * @str:string input
 * if the number of character, n = (length_of_the_string - 1) / 2
 *
 * Return:void
 */
void puts_half(char *str)
{
	int n, length, mid;

	length = 0;
	while (str[length] != '\0')
	{
		length++;
	}
	if (length % 2 == 0)
	{
		mid = length / 2;
		for (n = mid; n < length; n++)
		{
			_putchar(str[n]);
		}
	}
	else
	{
		mid = (length - 1) / 2;
		for (n = mid + 1; n < length; n++)
		{
			_putchar(str[n]);
		}
	}
}
