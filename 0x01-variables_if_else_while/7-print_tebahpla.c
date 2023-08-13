#include <stdio.h>
/**
 *  main - program that prints lower case alphabets in reverse
 *  Return: 0 (sucess)
 */
int main(void)
{
	char i;

	for (i = 'z' ; i >= 'a' ; i--)
		putchar(i);
	putchar('\n');
	return (0);
}
