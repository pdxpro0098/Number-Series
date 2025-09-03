#include <stdio.h>

void tetranacci(int nth)
{
    unsigned long long int T0 = 0, T1 = 0, T2 = 0, T3 = 1, T4 = 0;
    for (int i = 0; i <= nth; i++)
    {
        printf("%llu ", T3);
        T4 = T0 + T1 + T2 + T3;
        T0 = T1;
        T1 = T2;
        T2 = T3;
        T3 = T4;
    }
}

int main()
{
    tetranacci(100);

    return 0;
}