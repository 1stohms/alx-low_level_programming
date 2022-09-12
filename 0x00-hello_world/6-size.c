#include <stdio.h>

/**
 * main - Printing string in put function
 *
 * Description: using main function
 * this program prints "Programming is like building a multilingual puzzle
 * Return: 0
 */
int main(void)
{
	char u;
	int x;
	long e;
	long long b;
	float l;

	printf("Size of a char: %ld byte(s)\n", sizeof(u));
	printf("Size of an int: %ld byte(s)\n", sizeof(x));
	printf("Size of a long int: %ld byte(s)\n", sizeof(e));
	printf("Size of a long long int: %ld byte(s)\n", sizeof(b));
	printf("Size of float: %ld byte(s)\n", sizeof(l));
	return (0);
}
