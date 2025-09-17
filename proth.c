#include <stdio.h>

int power(int base, int exp)
{
    int result = 1;
    while (exp > 0)
    {
        result *= base;
        exp--;
    }
    return result;
}
void proth(int nth)
{
    int c = 0;
    for (int k = 1;; k += 2)
    {
        for (int n = 1; power(2, n) > k; n++)
        {
            printf("%d ", k * power(2, n) + 1);
            if (c > nth)
                return;

            c++;
        }
    }
}

int main()
{
    proth(10);
    return 0;
}
