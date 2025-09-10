#include <stdio.h>

void sylvester(int nth)
{
    unsigned long long int s = 2;
    unsigned long long int t = s;
    for (int i = 1; i <= nth; i++)
    {
        printf("%llu ", t);
        t = s + 1;
        s = s * t;
    }
}

int main()
{
    sylvester(10);
    return 0;
}