#include <stdio.h>

/**
 * main - print possible 3 digit combinations
 * a number can appear only once
 * Return: 0
 */

int main(void)
{
	int hunds, tens, units;

	for (hunds = 48; hunds < 58; hunds++)
	{
		for (tens = 49; tens < 58; tens++)
		{
			for (units = 50; units < 58; units++)
			{
				if ((tens < units) && (hunds < tens))
				{
					putchar(hunds);
					putchar(tens);
					putchar(units);
					if (hunds != 55 || tens != 56)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar(10);
	return (0);
}
