#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry Point
 * Return: 1
 * Description: Print without printf or puts, and display error
 */

int main (void)
{
	write (2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
