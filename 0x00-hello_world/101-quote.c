#include <stdio.h>
#include <unistd.h>
#include <string.h>
/**
 * main - Entry Point
 * Return: 1
 * Description: Print without printf or puts, and return error
 */

int main(void)
{
	write (2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 
	strlen("and that piece of art is useful\" - Dora Korpar, 2015-10-19\n"));
	return (1);
}
