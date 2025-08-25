#include <stdio.h>

int isPrime(int num)
{
    if (num <= 1)
    {
        return 0;
    }
    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

void prime(int nth)
{

    for (int i = 0; i < nth; i++)
    {
        if (isPrime(i))
        {
            printf("%d ", i);
        }
    }
}

int main()
{
    prime(100);

    return 0;
}