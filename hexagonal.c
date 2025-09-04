#include <stdio.h>

void hexagonal(int nth)
{
    for (int i = 1; i <= nth; i++)
    {
        printf("%d ", i * (2 * i - 1));
    }
}

int main()
{
    hexagonal(10);

    return 0;
}