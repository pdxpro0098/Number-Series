#include <stdio.h>

void arithmetic_progression(int nth, int a, int d)
{
    for (int i = 0; i <= nth; i++)
    {
        printf("%d ", a);
        a += d;
    }
}

int main()
{
    arithmetic_progression(10, 2, 3);
    return 0;
}