#include<stdio.h>
#include<stdlib.h>
#include"main.h"
/**
 *
 *
 */
void print_alphabet_x10(void)
{
	char c, i;

	for (c = 'a'; c < 'z'; c++)

	{
		for (i = 1; i <= 10; i++)

		{
			_putchar(c);
		}
	}
}
