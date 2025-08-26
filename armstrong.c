#include <stdio.h>

int power(int base, int exp)
{
    int result = 1;
    while (exp--)
    {
        result *= base;
    }
    return result;
}

int isArmstrong(int N)
{
    int temp = N, sum = 0, digits = 0;

    int t = N;
    while (t > 0)
    {
        digits++;
        t /= 10;
    }
    if (N == 0)
        digits = 1;

    temp = N;
    while (temp > 0)
    {
        int digit = temp % 10;
        sum += power(digit, digits);
        temp /= 10;
    }

    return (sum == N);
}

void printArmstrong(int nth)
{
    for (int i = 0; i < nth; i++)
    {
        if (isArmstrong(i))
        {
            printf("%d ", i);
        }
    }
}

int main()
{

    printArmstrong(10000);

    return 0;
}