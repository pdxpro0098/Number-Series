#include <stdio.h>

int digitSquareSum(int num)
{
    int sum = 0;
    while (num != 0)
    {
        sum += (num % 10) * (num % 10);
        num /= 10;
    }
    return sum;
}

int isHappy(int num)
{
    int count = 0;
    int n = digitSquareSum(num);
    while (n != 1)
    {
        n = digitSquareSum(n);
        if (n == 1)
        {
            return 1;
        }
        if (count == 100)
        {
            return 0;
        }

        count++;
    }
}

void happy(int nth)
{
    for (int i = 1; i <= nth; i++)
    {
        if (isHappy(i))
        {
            printf("%d ", i);
        }
    }
}

int main()
{
    happy(100);
    return 0;
}