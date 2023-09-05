#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int cents, num_coins, coin_count;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	int coin_values[] = {25, 10, 5, 2, 1};
	num_coins = sizeof(coin_values) / sizeof(coin_values[0]);

	coin_count = 0;

	for (int i = 0; i < num_coins; i++)
	{
		while (cents >= coin_values[i])
		{
			cents -= coin_values[i];
			coin_count++;
		}
	}

	printf("%d\n", coin_count);

	return (0);
}
