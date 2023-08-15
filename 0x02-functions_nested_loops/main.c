#include "main.h"
#include <stdio.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int r;
	int n;
	
	print_to_98(98);
	print_to_98(111);
	
	n = add(89, 9);
	printf("%d\n", n);

	print_last_digit(98);
	print_last_digit(0);
	r = print_last_digit(-1024);
	_putchar('0' + r);
	_putchar('\n');

	r = _abs(-1);
	printf("%d\n", r);
	
	r = _isalpha('H');
	_putchar(r + '0');
	r = _isalpha('o');
	_putchar(r + '0');
	r = _isalpha(108);
	_putchar(r + '0');
	r = _isalpha(';');
	_putchar(r + '0');
	_putchar('\n');
	
	r = _islower('H');
	_putchar(r + '0');
	r = _islower('o');
	_putchar(r + '0');
	r = _islower(108);
	_putchar(r + '0');
	_putchar('\n');
	
	print_alphabet();
	_putchar('1');
	_putchar('0');
	_putchar('\n');
	print_alphabet_x10();
	/*jack_bauer();*/
	times_table();
	return (0);
}
