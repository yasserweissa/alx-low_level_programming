#include <stdio.h>

/**
 * main - print possible 2 digit combinations
 * a number can appear only once
 * Return: 0
 */

int main(void)
{
	int tens, units;

	for (tens = 48; tens < 58; tens++)
	{
		for (units = 48; units < 58; units++)
		{
			putchar(tens);
			putchar(units);
			if (tens != 57 || units != 57)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar(10);
	return (0);
}
