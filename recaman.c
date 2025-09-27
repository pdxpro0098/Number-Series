#include <stdio.h>

int inSequence(int seq[], int len, int key)
{
    for (int i = 0; i < len; i++)
    {
        if (seq[i] == key)
        {
            return 1;
        }
    }
    return 0;
}

void recaman(int nth)
{
    int sequence[nth];
    sequence[0] = 0;

    for (int i = 1; i < nth; i++)
    {
        int n = sequence[i - 1] - i;

        if (n > 0 && !inSequence(sequence, i, n))
        {
            sequence[i] = n;
        }
        else
        {
            sequence[i] = sequence[i - 1] + i;
        }
    }

    for (int i = 0; i < nth; i++)
    {
        printf("%d ", sequence[i]);
    }
}

int main()
{

    recaman(10);

    return 0;
}