#include <stdio.h>

int isHarshad(int number)
{
    int n = number;
    int sum = 0;
    while (n != 0)
    {
        sum += n % 10;
        n /= 10;
    }

    return number % sum == 0 ? 1 : 0;
}

void harshad(int nth)
{
    for (int i = 1; i < nth; i++)
    {
        if (isHarshad(i))
        {
            printf("%d ", i);
        }
    }
}

int main()
{
    harshad(100);
    return 0;
}