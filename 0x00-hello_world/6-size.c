#include<stdio.h>
/**
 * main - The entry point of printf
 * printf: displays size of each data types
 * @c: rep char
 * @i: rep integer
 * @s: rep short
 * @f: rep float
 * Return: 0
 */
int main(char c, int i, short s, float f)
{
	printf("Size of a char: %ld byte(s)\n", sizeof(char));
	printf("Size of an int: %ld byte(s)\n", sizeof(int));
	printf("Size of long int: %ld byte(s)\n", sizeof(long int));
	printf("Size of long long int: %ld byte(s)\n", sizeof(long long int));
	printf("Size of a float: %ld bytes(s)\n", sizeof(float));
	return (0);
}
