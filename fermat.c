#include <stdio.h>

unsigned long long int power(unsigned long long int num, unsigned long long int exponent)
{
    if (exponent == 0)
    {
        return 1;
    }

    unsigned long long int n = num;
    for (int i = 1; i < exponent; i++)
    {
        n *= num;
    }
    return n;
}

void fermat(int nth)
{
    for (int i = 0; i <= nth; i++)
    {
        printf("%llu ", power(2, power(2, i)) + 1);
    }
}
int main()
{
    fermat(5);
    return 0;
}