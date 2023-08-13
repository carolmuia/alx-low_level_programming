#include <stdio.h>
/**
 *  main - program that print all numbers of base 16 to lower case
 *  Return: 0 (sucess)
 */
int main(void)
{
	int i;
	char h;

	for (i = 0 ; i < 10 ; i++)
		putchar(i + '0');
	for (h = 'a' ; h <= 'f' ; h++)
		putchar(h);
	putchar('\n');
	return (0);

}

