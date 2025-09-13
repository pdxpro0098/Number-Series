#include <stdio.h>
#include <math.h>

void Cullen(int nth)
{
    // Cn = n * 2^n +1
    for (int i = 0; i < nth; i++)
    {
        printf("%d ", i * ((int)pow(2, i)) + 1);
    }
}

int main()
{

    Cullen(10);
    return 0;
}