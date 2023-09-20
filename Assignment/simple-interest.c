#include<stdio.h>

int main(){
    double principal, rate, time, interest;

    printf("Enter principal amount: ");
    scanf("%lf", &principal);
    printf("Enter rate of interest: ");
    scanf("%lf", &rate);
    printf("Enter time: ");
    scanf("%lf", &time);

    interest = (principal*rate*time)/100;
    printf("Simple Interest: %lf\n", interest);
    return 0;
}