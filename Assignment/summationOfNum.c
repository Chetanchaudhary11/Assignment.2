#include<stdio.h>
int main(){
    int num,digit,sum=0;
    printf("Enter any number:");
    scanf("%d",&num);

    num = (num < 0) ? -num : num;  //Take the absolute value of the number to handle negative numbers 
    while(num > 0){
        digit = num%10;
        sum = sum + digit;  //sum += digit
        num = num/10;  //Remove the last digit
    }
    if(num < 0){
        sum = -sum;
    }
    printf("Summation of Digits is: %d",sum);

    return 0;
}