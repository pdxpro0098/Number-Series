#include <stdio.h>

void printTrignular(int nth)
{
    for (int i = 1; i < nth; i++)
    {
        printf("%d\n", (i * (i + 1)) / 2);
    }
}

int main()
{
    printTrignular(100);
    return 0;
}