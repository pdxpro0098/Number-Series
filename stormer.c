#include <stdio.h>
#include <math.h>

int maxPrimeFactors(int n)
{
    int maxPrime = -1;

    while (n % 2 == 0)
    {
        maxPrime = 2;
        n /= 2;
    }

    for (int i = 3; i < (int)(sqrt(n) + 1); i += 2)
        while (n % i == 0)
        {
            maxPrime = i;
            n /= i;
        }

    if (n > 2)
        maxPrime = n;

    return (int)(maxPrime);
}

int stormer(int n)
{
    int i = 1;

    int count = 0;
    while (count < n)
    {
        int t = i * i + 1;
        if (maxPrimeFactors(t) >= 2 * i)
        {
            printf("%d ", i);
            count += 1;
        }
        i += 1;
    }
    return i;
}

int main()
{

    int n = 10;
    stormer(10);
}