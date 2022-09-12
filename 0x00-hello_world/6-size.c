#include <stdio.h>
/**
 * main - Printing string in put function
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char u;
	int x;
	long e;
	long long b;
	float l;

	printf("Size of a char: %d byte(s)\n", sizeof(u));
	printf("Size of an int: %d byte(s)\n", sizeof(x));
	printf("Size of a long int: %d byte(s)\n", sizeof(e));
	printf("Size of a long long int: %d byte(s)\n", sizeof(b));
	printf("Size of float: %d byte(s)\n", sizeof(l));
	return (0);
}
