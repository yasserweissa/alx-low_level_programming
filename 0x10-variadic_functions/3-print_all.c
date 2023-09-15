#include "variadic_functions.h"

/**
 * print_all - prints anything, with a list of passed arguments types
 * @format: list of types arguements passed to the function
 */
void print_all(const char * const format, ...)
{
	va_list args;
	char current_format;
	int int_arg;
	char char_arg;
	float float_arg;
	char *str_arg;

	int i = 0;

	va_start(args, format);
	while (format && format[i])
	{
		if (format[i] != 'c' && format[i] != 'i' && format[i] != 'f' && format[i] != 's')
		{
			i++;
			continue;
		}

		current_format = format[i];

		if (current_format == 'c')
		{
			char_arg = va_arg(args, int);
			printf("%c", char_arg);
		}
		else if (current_format == 'i')
		{
			int_arg = va_arg(args, int);
			printf("%d", int_arg);
		}
		else if (current_format == 'f')
		{
			float_arg = va_arg(args, double);
			printf("%f", float_arg);
		}
		else if (current_format == 's')
		{
			str_arg = va_arg(args, char *);
			if (str_arg == NULL)
				printf("(nil)");
			else
				printf("%s", str_arg);
		}

		if (format[i + 1])
			printf(", ");
		i++;
	}
	va_end(args);
	printf("\n");
}
