#include <stdio.h>

void Square(int nth){
    for (int i = 1; i <= nth; i++)
    {
        printf("%d\n", i * i);
    }
    
}

int main(){

    Square(10);

    return 0;
}