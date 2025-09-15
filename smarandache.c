#include <stdio.h>

void smarandache(int nth)
{
    for (int i = 1; i <= nth; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
}

int main()
{
    smarandache(10);
    return 0;
}