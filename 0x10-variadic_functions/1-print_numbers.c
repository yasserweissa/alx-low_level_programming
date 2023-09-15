#include "variadic_functions.h"

/**
 * print_numbers - prints integers with a separator in between, then a new line
 * @separator: a separating string
 * @n:number of integers
 * @...: the integers
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list num_list;
	unsigned int i;

	va_start(num_list, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(num_list, int));
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(num_list);
}
