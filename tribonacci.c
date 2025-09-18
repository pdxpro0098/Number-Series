#include <stdio.h>

void tribonacci(int nth)
{
    int n = nth - 2, first = 0, second = 0, third = 1, next;
    printf("%d %d %d ", first, second, third);
    for (int i = 2; i <= n; i++)
    {
        next = first + second + third;
        printf("%d ", next);
        first = second;
        second = third;
        third = next;
    }
}

int main()
{
    tribonacci(10);
    return 0;
}