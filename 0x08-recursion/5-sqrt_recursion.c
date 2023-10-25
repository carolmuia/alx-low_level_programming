#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: nuber to calculate
 * Return: resulting squre root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual _sqrt_recursion(n, 0));
}
/***
 * actual_sqrt_recursion - recurses to find the natural
 * @n: number to calculate squre root of
 *@i: interactor
 * Return: resulting squre root
 */
int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (1);
	return (actual _sqrt_recursion(n, i + 1));
}
