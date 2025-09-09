#include <stdio.h>
#include <math.h>

int isAmicable(int a, int b)
{
    int aSum = 1;
    int bSum = 1;
    for (int i = 2; i <= sqrt(a); i++)
    {
        if (a % i == 0)
        {
            aSum += i;

            if (a / i != i)
                aSum += a / i;
        }
    }

    for (int i = 2; i <= sqrt(b); i++)
    {
        if (b % i == 0)
        {
            bSum += i;

            if (b / i != i)
                bSum += b / i;
        }
    }

    return aSum == b && bSum == a;
}

void Amicable(int nth)
{
    for (int i = 2; i < nth; i++)
    {
        for (int j = i + 1; j < nth; j++)
        {
            if (isAmicable(i, j))
            {
                printf("%d %d", i, j);
                printf("\n");
            }
        }
    }
}

int main()
{
    Amicable(7000);

    return 0;
}