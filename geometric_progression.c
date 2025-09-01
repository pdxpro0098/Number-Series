#include <stdio.h>

void geometric_progression(int nth, int a, int r)
{
    for (int i = 0; i <= nth; i++)
    {
        printf("%d ", a);
        a *= r;
    }
}
int main()
{
    geometric_progression(10, 3, 2);
    return 0;
}