#include "main.h"
#include <stdio.h>

/**
 * main - prints the numbers from 1 to 100, then a new line
 * but for  multiples of 3&5, prints Fizz&Buzz respectively
 * if a number is both a multiple of 3&5, print both Fizz&Buzz
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 != 0)
			printf(" Fizz");

		else if (i % 5 == 0 && i % 3 != 0)
			printf(" Buzz");

		else if (i % 3 == 0 && i % 5 == 0)
			printf(" FizzBuzz");

		else if (i == 1)
			printf("%d", i);

		else
			printf(" %d", i);

	}
	printf("\n");

	return (0);
}
