#include <stdio.h>

#define l 1000000000

/**
* main - finds & prints the first 98 Fibonacci numbers
* Return: 0
*/

int main(void)
{
	int i;
	unsigned long int x, y, x1, x2, y1, y2;

	x = 1;  /* Initialize the first Fibonacci number */
	y = 2;  /* Initialize the second Fibonacci number */

	printf("%lu", x);  /* Print the first Fibonacci number */

	/* Calculate and print Fibonacci numbers up to the 91st number */
	for (i = 1; i < 91; i++)
	{
		printf(", %lu", y);  /* Print the current Fibonacci number */
		y += x;  /* Calculate the next Fibonacci number */
		x = y - x;  /* Update x to the previous Fibonacci number */
	}

	/* Split the large Fibonacci numbers into smaller parts for the next loop */
	x1 = (x / l);
	x2 = (x % l);
	y1 = (y / l);
	y2 = (y % l);

	/* Calculate and print Fibonacci numbers from 92 to 98 */
	for (i = 92; i < 99; ++i)
	{
		/* Print current Fibonnaci */
		printf(", %lu", y1 + (y2 / l));
		printf("%lu", y2 % l);

		/* Update the variables for the next iteration */
		y1 = y1 + x1;
		x1 = y1 - x1;
		y2 = y2 + x2;
		x2 = y2 - x2;
	}

	printf("\n");  /* Print a newline character to finish the output */
	return (0);  /* Exit the program */
}
