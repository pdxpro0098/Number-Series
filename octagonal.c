#include <stdio.h>

void  octagonal(int nth)
{
    for (int i = 1; i <= nth; i++)
    {
        printf("%d ", i * (3 * i - 2));
    }
}

int main()
{
     octagonal(10);

    return 0;
}