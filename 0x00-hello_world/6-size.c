#include <stdio.h>
/**
 * main - program that prints size of various computer types
 * Return: 0 (print)
 */
int main(void)
{
char x;
int y;
long int z;
long long int r;
float q;

printf("size of a char:%lu bytes(s)\n", (unsigned long)sizeof(x));
printf("size of an int:%lu byte(s)\n", (unsigned long)sizeof(y));
printf("size of a long int:%lu byte(s)\n", (unsigned long)sizeof(z));
printf("size of a long long int:%lu byte(s)\n", (unsigned long)sizeof(r));
printf("size of a float:%lu byte(s)\n", (unsigned long)sizeof(q));
return (0);
}

