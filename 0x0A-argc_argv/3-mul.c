#include <stdio.h>

/**
 * str_to_int - converts string to integer
 * @s: string
 * Return: integer
 */
int str_to_int(const char *s)
{
	int sign, result, i, count_minus, count_plus;

	sign = 1;
	result = 0;
	i = 0;

	count_minus = 0;
	count_plus = 0;

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

/**
 * MultiplyAndStore - multiples two numeric values, solution in address
 * @num1: 1st number
 * @num2: 2nd number
 * @result: pointer to result's destination
 * Return: 0 if success, 1 if error
 */
int MultiplyAndStore(int num1, int num2, int *result)
{
	*result = num1 * num2;
	return (0);
}

/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0, unless the program does not receive two arguments
 */
int main(int argc, char *argv[])
{
	int a, b, c;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	a = str_to_int(argv[1]);
	b = str_to_int(argv[2]);

	if (MultiplyAndStore(a, b, &c))
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", c);
	return (0);
}
