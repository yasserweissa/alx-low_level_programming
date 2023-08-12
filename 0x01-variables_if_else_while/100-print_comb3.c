#include <stdio.h>

/**
 * main - print possible 2 digit combinations
 * a number can appear only once
 * Return: 0
 */

int main(void)
{
	int tens, units;

	for (tens = 48; tens < 57; tens++)
	{
		for (units = 49; units < 58; units++)
		{
			if (tens < units)
			{
				putchar(tens);
				putchar(units);
				if (tens != 56 || units != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar(10);
	return (0);
}
