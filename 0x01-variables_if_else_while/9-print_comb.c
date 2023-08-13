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
		if (i == 9)
			putchar(i + '0');
		else
		{	putchar(i + '0');
		putchar(',');
			putchar(' ');
		}

	}
	return (0);
}
