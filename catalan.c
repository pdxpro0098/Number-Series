#include <stdio.h>

unsigned long long int factorial(int num)
{
    if (num == 1 || num == 0)
    {
        return 1;
    }
    return num * factorial(num - 1);
}

void catalan(int nth)
{
    for (int i = 0; i < nth; i++)
    {
        printf("%llu ", factorial(2 * i) / (factorial(i + 1) * factorial(i)));
    }
}

int main()
{
    catalan(10);
    return 0;
}