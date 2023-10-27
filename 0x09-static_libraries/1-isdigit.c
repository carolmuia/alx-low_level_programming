#include "main.h"
/**
 *_isdigit -  a function that checks for a digit for 0 through 9
 *@c: parameter
 *Return: 1 (sucess) and 0 (failure)
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
