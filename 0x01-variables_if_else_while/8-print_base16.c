#include<stdio.h>
/**
 * main - entry
 * description:  a program that prints all the numbers of base 16
 * in lowercase
 * Return: 0
 */
int main(void)
{
	char ch;

	for (ch = '0'; ch <= '9'; ch++)

	{
		putchar(ch);
	}
	for (ch = 'a'; ch < 'g'; ch++)

	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
