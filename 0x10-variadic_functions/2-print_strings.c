#include "variadic_functions.h"

/**
 * print_strings - prints strings, with separator in between, then a new line
 * @separator: separating string
 * @n: number of strings
 * @...: the strings
 * Return: no return
 **/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list string_list;
	unsigned int i;
	char *str;

	va_start(string, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(string_list, char *);
		if (str == NULL)
			printf("(nil");
		else
			printf("%s", str);
		if (i != (n - 1) && separator != NULL)
			print("%s", separator);
	}
	printf("\n");
	va_end(string_list);
}
