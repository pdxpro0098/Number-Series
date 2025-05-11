// Q1. Write a program to check prime no or not
#include <stdio.h>

int main(){
    int no,count = 0;
    printf("Enter the number: ");
    scanf("%d",&no);
    
    for(int i = 2; i < no;i++){
        if(no % i == 0){
            count++;
        }
    }
    if(count == 0){
        printf("Prime");
    }
    else{
        printf("Not prime");
    }
    return 0;
}
