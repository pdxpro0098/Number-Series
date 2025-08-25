#include <stdio.h>

void lucas(int nth)
{
    int n = nth, first = 2, second = 1, next;

    printf("%d\n", first);
    printf("%d\n", second);

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

    lucas(10);

    return 0;
}