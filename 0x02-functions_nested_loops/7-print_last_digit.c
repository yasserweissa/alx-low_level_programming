#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: the input number
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
	int l;

	l = _abs(n) % 10;
	_putchar(l + '0');
	return (l);
}
