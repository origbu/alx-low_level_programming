/**
 * rev_string-a function that reverses a string
 * @s:input to reverse
 *
 * Return:strings in reverse
 */

void rev_string(char *s)
{
	int i, j, k, temp;
	
	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	k = 0;
	j = i - j;
	
	while ( k < j)
	{
		temp = s[k];
		s[k] = s[j];
		s[j] = temp;
		k++;
		j--;
	}
}
