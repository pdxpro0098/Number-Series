#include <stdio.h>

void cube(int nth)
{
    for (int i = 1; i <= nth; i++)
    {
        printf("%d\n", i * i * i);
    }
}

int main()
{

    cube(10);

    return 0;
}