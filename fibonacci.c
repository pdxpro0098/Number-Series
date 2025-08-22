#include <stdio.h>

void printFibonacci(int nth)
{
    int n = nth, first = 0, second = 1, next;

    for (int i = 2; i <= n; i++)
    {
        next = first + second;
        printf("%d ", next);
        first = second;
        second = next;
    }
    printf("\n"); // Print a newline character for formatting
}

int main()
{
    printFibonacci(20);
    return 0;
}