#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of itself
 * opcodes should be printed in hexadecimal, lowercase
 * each opcode is two char long, list ends with new line
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, bytes;
	char *arr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	bytes = atoi(argv[1]);
	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	arr = (char *)main;
	for (i = 0; i < bytes - 1; i++)
		printf("%02hhx ", arr[i]);
	printf("%02hhx\n", arr[i]);
	return (0);
}
