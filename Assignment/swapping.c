#include<stdio.h>

int main(){
    int a,b;

    printf("\nEnter the value of a:");
    scanf("%d", &a);
    printf("\nEnter the value of b:");
    scanf("%d", &b);

    a=a+b;
    b=a-b;
    a=a-b;
    printf("After swapping value of a: %d\n", a);
    printf("After swapping value of b: %d", b);
    return 0;
}