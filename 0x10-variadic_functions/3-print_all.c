#include "variadic_functions.h"

/**
 * print_all - prints anything, with a list of passed arguments types
 * @format: list of types arguements passed to the function
 */
void print_all(const char * const format, ...)
{
	va_list arg_list;
	int i;
	char *str, *sep;

	va_start(arg_list, format);
	if (format)
	{
		sep = "";
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", sep, va_arg(arg_list, int));
					break;
				case 'i':
					printf("%s%d", sep, va_arg(arg_list, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(arg_list, double));
					break;
				case 's':
					str = va_arg(arg_list, char *);
					if (!str)
					str = "(nil)";
					printf("%s%s", sep, str);
					break;
				default:
					i++;
					continue;
			}
			sep = ", ";
			i++;
		}
		printf("\n");
		va_end(arg_list);
	}
}
