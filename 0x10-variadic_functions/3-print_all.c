#include "variadic_functions.h"

/**
 * print_all - prints anything, with a list of passed arguments types
 * @format: list of types arguements passed to the function
 */
void print_all(const char * const format, ...)
{
	va_list args;
	char *str_arg, char_arg;
	int i, int_arg;
	float float_arg;

	i = 0;
	va_start(args, format);
	while (format && format[i])
	{
		if (format[i] == 'c')
		{
			char_arg = va_arg(args, int);
			printf("%c", char_arg);
		} else if (format[i] == 'i')
		{
			int_arg = va_arg(args, int);
			printf("%d", int_arg);
		} else if (format[i] == 'f')
		{
			float_arg = va_arg(args, double);
			printf("%f", float_arg);
		} else if (format[i] == 's')
		{
			str_arg = va_arg(args, char *);
			if (str_arg == NULL)
				printf("(nil)");
			else
				printf("%s", str_arg);
		}
		else
		{
			i++;
			continue;
		}
		if (format[i + 1])
			printf(", ");
		i++;
	}
	va_end(args);
	printf("\n");
}
