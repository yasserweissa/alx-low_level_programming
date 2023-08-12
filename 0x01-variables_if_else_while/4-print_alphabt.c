#include <stdio.h>

/**
 * main - prints alphabet except e & q, using putchar
 * Return: 0
 */

int main(void)
{
	char ch = 97;
	
	while (ch < 123)
	{
		if (ch != 101 && ch != 113)
			putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
