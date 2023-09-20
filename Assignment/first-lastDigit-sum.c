#include<stdio.h>
int main(){
    int num,firstDigit,lastDigit;
    printf("Enter any number:");
    scanf("%d",&num);

    firstDigit = num;
    while (firstDigit >= 10)
    {
        firstDigit = firstDigit/10;
    }
    printf("First digit is: %d\n",firstDigit);

    lastDigit = num;
    lastDigit = num%10;
    printf("Last digit is: %d\n",lastDigit);

    int sum = firstDigit + lastDigit;
    printf("The summation of first and last digit is: %d", sum);
    return 0;
}