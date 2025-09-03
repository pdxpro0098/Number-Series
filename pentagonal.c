#include <stdio.h>

void pentagonal(int nth)
{
    for (int i = 1; i <= nth; i++)
    {
        printf("%d ", i * (3 * i - 1) / 2);
    }
}

int main()
{
    pentagonal(10);

    return 0;
}