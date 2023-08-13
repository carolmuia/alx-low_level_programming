#include <stdio.h>
/**
 *  main - program that prints all possible combinations of single digits
 *  Return: 0 (sucess)
 */
int main(void)
{
	int i;

	for (i = 0 ; i < 10 ; i++)
	{
		putchar(i + '0');

		if (i != 9)
		{
			putchar(',');
			putchar(' ');
		}

	}
	putchar('\n');
	return (0);
}
