#include<stdio.h>
int main(){
    int num,digit,maxDigit=0;
    printf("Enter any number:");
    scanf("%d",&num);
    
    while(num > 0){
        digit = num % 10;
        if(digit > maxDigit){
            maxDigit = digit;
        }
        num = num/10;
    }
    printf("Maximum Digit is: %d",maxDigit);
    return 0;
}