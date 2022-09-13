#include<stdio.h>
/**
 * main - The entry
 * description: print a-z in a reverse manner
 * Return: 0
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)

	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
