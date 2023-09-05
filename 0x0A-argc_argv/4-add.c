#include <stdio.h>
#include <string.h>
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
 * _isdigit - checks for a digit (0 through 9)
 * @c: int to be checked
 * Return: 1 if c is a digit, 0 otherwise
 **/
int _isdigit(int c)
{
	return (c >= '0' && c <= '9');
}


/**
 * check_num - check if the whole string is a number
 * @str: array str
 * Return: 0 if not a num, 1 if a num
 **/
int check_num(char *str)
{
	/*Declaring variables*/
	unsigned int count;

	count = 0;
	while (count < strlen(str)) /*count string*/

	{
		if (!_isdigit(str[count])) /*check if str there are digit*/
		{
			return (0);
		}

		count++;
	}
	return (1);
}

/**
 * main - adds +ve numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0, unless the program receives a non numeric argument
 */
int main(int argc, char *argv[])
{
	int sum, i;

	for (i = 1, sum = 0; i < argc; i++)
	{
		if (check_num(argv[i]))
			sum += str_to_int(argv[i]);
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}
