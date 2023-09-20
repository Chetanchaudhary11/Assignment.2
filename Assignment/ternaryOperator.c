#include<stdio.h>

int main(){
    int num;

    printf("Enter any number: ");
    scanf("%d", &num);

    //Ternary operator is a shorthand way of writing an if-else statement in a single line of code
    // (condition) ? true_expression : false_expression;
    (num % 2 == 0) ? printf("%d is even.\n", num) : printf("%d is odd.\n", num);
    return 0;
}