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

	for (c = 1; c <= 10; c++)

	{
		for (i = 'a'; i < 'z'; i++)

		{
			_putchar(i);
		}
	}
}
