#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/**
 * main - This is the entry point
 * description - this program display the last digit of a figure
 * checks if it is positive or negative
 * Return: 0
 */
int main(void)
{
	int n, a;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
		/* your code goes there */
	a = n % 10;

	if (a > 5)
	{
		printf("Last digit of %i is %d and is greater than 5\n", n, a);
	}
	else if (a == 0)
	{
		printf("Last digit of %i is %d and is 0\n", n, a);
	}
	return (0);
}
