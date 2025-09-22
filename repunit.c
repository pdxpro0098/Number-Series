#include <stdio.h>

void repunit(int nth)
{
    int n = 1;
    for (int i = 1; i <= nth; i++)
    {
        printf("%d ", n);
        n = n * 10 + 1;
    }
}

int main()
{
    repunit(10);
    return 0;
}