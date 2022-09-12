#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/**
 * main - The entry point
 * description: the program displays a-z
 * Return: 0 when successful
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)

	{
		putchar(ch);
	}
	putchar('\n');

	return (0);
}
