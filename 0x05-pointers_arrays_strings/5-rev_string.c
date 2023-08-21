 #include "main.h"

/**
 * rev_string - a function thet reverses a string
 * @s: parameter
 * Return: void
 */

void rev_string(char *s)
{
	int i;
	char h;
	int count = 0;

	for (i = 0 ; s[i] != '\0' ; i++)
		count++;
	for (i = 0 ; i < count / 2 ; i++)
	{
		h = s[i];
		s[i] = s[count - 1];
		s[count - 1 - i] = h;
	}
}
