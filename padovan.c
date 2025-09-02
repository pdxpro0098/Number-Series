#include <stdio.h>

void padovan(int nth)
{
    unsigned long long int zero = 1, first = 1, second = 1, next = zero;
    for (int i = 3; i <= nth; i++)
    {
        printf("%llu ", next);
        next = first + zero;
        zero = first;
        first = second;
        second = next;
    }
}

int main()
{
    padovan(100);

    return 0;
}