#include<stdio.h>
#include<stdlib.h>
/**
 * main - the entry point
 * description: this program print all the
 * letters except for q and e
 * Return: 0
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)

	{
		if (ch != 'q' && ch != 'e')

		{
			putchar(ch);
		}
		putchar('\n');
		return (0);
	}
}
