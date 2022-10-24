#include<stdio.h>
/**
 * main - Entery point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char u;
int a;
long int x;
long long e;
float c;

printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(u));
printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(a));
printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(x));
printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(e));
printf("Size of float: %lu byte(s)\n", (unsigned int)sizeof(c));

return (0);
}
