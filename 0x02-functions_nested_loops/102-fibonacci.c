#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 & 2
 * Return: 0
 */

int main() 
{
    int i;
    unsigned long long int n1, n2, n3;

    printf("1, 2");
    
    for (n1 = 1, n2 = 2, i = 2; i < 50; i++) 
    {
        n3 = n1 + n2;
        printf(", %llu", n3);
        n1 = n2;
        n2 = n3;
    }

    return (0);
}
