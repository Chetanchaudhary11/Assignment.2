#include<stdio.h>
int main(){
    int num,remainder;
    printf("Enter any number:");
    scanf("%d",&num);
    while(num > 0){
        remainder = num%10;
        printf("%d",remainder);
        num = num/10;
    }
    return 0;
}