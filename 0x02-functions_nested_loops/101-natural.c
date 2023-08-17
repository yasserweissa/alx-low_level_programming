#include <stdio.h>

/**
 * main - computes & prints the sum of the multiples of 3 or 5 below 1024
 * Return: 0
 */

int main(void) 
{
    int i, sum;

    for (i = 0, sum = 0; i < 1024; i++) 
    {
        if (i % 3 == 0 || i % 5 == 0)
            sum += i;
    }
    printf("%d\n", sum);

    return (0);
}
