#include <stdio.h>

int isPerfect(int num)
{
    // int numCp = num;
    int sum = 0;
    for (int i = 1; i < num; i++)
    {
        if (num % i == 0)
        {
            sum += i;
        }
    }
    return sum == num;
}

void perfect(int nth)
{
    for (int i = 1; i <= nth; i++)
    {
        if (isPerfect(i))
        {
            printf("%d ", i);
        }
    }
}

int main()
{
    perfect(10000);

    return 0;
}