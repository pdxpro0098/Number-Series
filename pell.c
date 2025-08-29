#include <stdio.h>

int PELL(int n)
{
    if (n <= 2)
    {
        return n;
    }
    return 2 * PELL(n - 1) + PELL(n - 2);
}

void pell(int nth)
{
    for (int i = 1; i < nth; i++)
    {
        printf("%d ", PELL(i));
    }
}

int main()
{
    pell(10);
    return 0;
}