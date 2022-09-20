/**
 * rev_string-a function that reverses a string
 * @s:input to reverse
 *
 * Return:strings in reverse
 */

void rev_string(char *s)
{
	char rev = s[0];
	int fcounter = 0;
	int i;

	while (s[fcounter] != '\0')
		fcounter++;
	for (i = 0; i < fcounter; fcounter++)
	{
		fcounter--;
		rev = s[i];
		s[i] = s[fcounter];
		s[fcounter] = rev;
	}
}
