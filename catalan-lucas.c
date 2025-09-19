#include <stdio.h>

unsigned long long int factorial(int num)
{
    int fact = 1;
    for (int i = 2; i <= num; i++)
    {
        fact *= i;
    }
    return fact;
}

unsigned long long binomial(int n, int k)
{
    return factorial(n) / (factorial(k) * factorial(n - k));
}

void catalanLucas(int nth)
{
    for (int i = 0; i < nth; i++)
    {
        printf("%llu ", binomial(2 * i, i));
    }
}

int main()
{
    catalanLucas(10);
    return 0;
}