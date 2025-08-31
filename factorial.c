#include <stdio.h>

void factorial(int nth)
{
    unsigned long long int fact = 1;
    for (int i = 1; i <= nth; i++)
    {
        printf("%llu ", fact);
        fact *= i;
    }
}

int main()
{
    factorial(10);

    return 0;
}