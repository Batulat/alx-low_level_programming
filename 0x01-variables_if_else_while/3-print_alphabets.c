#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/**
 * main - the entry pint
 * description: this program
 * print both upper case
 * and lower case of the alphabet
 * Return: 0
 */
int main(void)
{
	char ch;

	/*lowercase*/
	for (ch = 'a'; ch <= 'z'; ch++)

	{
		putchar(ch);
	}
	/*uppercase*/
	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
