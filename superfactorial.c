#include <stdio.h>

unsigned long long int factorial(int nth)
{
    unsigned long long int fact = 1;
    for (int i = 1; i <= nth; i++)
    {
        fact *= i;
    }
    return fact;
}

void superFactorial(int nth)
{
    unsigned long long int SF = 1;
    for (int i = 1; i <= nth; i++)
    {
        SF *= factorial(i);
        printf("%llu ", SF);
    }
}

int main()
{
    superFactorial(10);

    return 0;
}