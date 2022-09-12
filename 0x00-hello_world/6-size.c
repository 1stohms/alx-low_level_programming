#include <stdio.h>

/**
 * main - printing string in put function
 *
 * Description: using main function
 * Return: Always 0 (Good)
 */
int main(void)
{
	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(char));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(int));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(long int));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned)sizeof(long long int));
	printf("Size of float: %lu byte(s)\n", (unsigned)sizeof(float));
	return (0);
}
