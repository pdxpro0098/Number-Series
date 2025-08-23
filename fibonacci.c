#include <stdio.h>

void printFibonacci(int nth)
{
    int n = nth, first = 0, second = 1, next;

    for (int i = 2; i <= n; i++)
    {
        next = first + second;
        printf("%d \n", next);
        first = second;
        second = next;
    }
}

int main()
{
    printFibonacci(10);
    return 0;
}
