#include "main.h"

/**
 * _atoi - converts string to integer
 * @s: string
 * Return: integer
 */
int _atoi(const char *s)
{
	int sign, result, i, count_minus, count_plus;

	sign = 1;
	result = 0;
	i = 0;

	count_minus = 0;
	count_plus = 0;

	/* char *str = "-2147483648";*/
	while (s[i] != '\0')
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			while (s[i] >= '0' && s[i] <= '9')
			{
				result = result * 10 + (s[i] - '0');
				i++;
			}
			break;
		}

		if (s[i] == '-')
			count_minus++;
		else if (s[i] == '+')
			count_plus++;
		i++;
	}

	if (count_minus > count_plus)
		sign = -1;
	else if (count_minus <= count_plus)
		sign = 1;

	return (result * sign);
}
