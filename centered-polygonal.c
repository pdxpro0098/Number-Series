#include <stdio.h>

void centeredPolygonal(int k)
{
    int n = 10;
    for (int i = 0; i < n; i++)
    {
        printf("%d ", k * i * (i + 1) / 2 + 1);
    }
    printf("\n");
}

int main()
{
    centeredPolygonal(6);
    return 0;
}