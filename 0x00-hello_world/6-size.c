#include<stdio.h>
/**
 * main - The entry point of printf
 * printf: displays size of each data types
 * c: rep char
 * i: rep integer
 * s: rep short
 * f: rep float
 * Return: 0
 */
int main(void)
{
	char c;
	int i;
	short s;
	float f;

	printf("Size of a char: %ld byte(s)\n", sizeof(c));
	printf("Size of an int: %ld byte(s)\n", sizeof(i));
	printf("Size of a long int: %ld byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %ld byte(s)\n", sizeof(long long int));
	printf("Size of a float: %ld bytes(s)\n", sizeof(float));
	return (0);
}
