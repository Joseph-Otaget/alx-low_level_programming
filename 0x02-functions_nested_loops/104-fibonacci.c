#include "main.h"
#include <stdio.h>

/**
 * print_fibonacci - Prints the first 98 Fibonacci numbers
 * The Fibonacci sequence starts with 1 and 2 only
 * The function prints the numbers in the
 * sequence, separated by commas and spaces, and followed by a new line.
 */
void print_fibonacci(void)
{
    unsigned long int a, b, c;
    int count;
    int n = 98; // Number of Fibonacci numbers to print

    a = 1;
    b = 2;

    if (n >= 1)
    {
        printf("%lu", a);

        for (count = 1; count < n; count++)
        {
            printf(", %lu", b);
            c = a + b;
            a = b;
            b = c;
        }
    }

    printf("\n");
}

/**
 * main - Entry point of the program.
 * Calls the print_fibonacci function to print the first 98 Fibonacci numbers.
 *
 * Return: Always 0 to indicate successful execution of the program.
 */
int main(void)
{
    print_fibonacci();
    return (0);
}
