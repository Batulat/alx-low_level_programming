#include<stdio.h>
/**
 * main - entry
 * description:  a program that prints all the numbers of base 16
 * in lowercase
 * Return: 0
 */
int main(void)
{
	unsigned int i;
	char ch;

	for (i = 0; i < 10; i++)

	{
		putchar(i);
	}
	for (ch = 'a'; ch < 'g'; ch++)

	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
