#include <stdio.h>
/**
 * main - program that prints alphabets in lower case expect q and e
 * Return: 0 (sucess)
 */
int main(void)
{
	char i;
	for (i = 'a' ; i <= 'z' ; i++)

		if (i != 'q' && i != 'e')
			putchar(i);
	putchar('\n');
	return (0);
}
