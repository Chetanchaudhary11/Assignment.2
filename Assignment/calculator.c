#include<stdio.h>
int main(){
    int num1, num2;
    char operator;
    
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter an operator (+, -, *, /, %%): ");
    scanf(" %c", &operator);    //The space before %c in the scanf function is important to consume any newline characters
    printf("Enter second number: ");
    scanf("%d", &num2);

    switch(operator){
        case '+': 
        printf("Addition: %d\n", num1 + num2);
        break;

        case '-': 
        printf("Substraction: %d\n", num1 - num2);
        break;

        case '*': 
        printf("Multiplication: %d\n", num1 * num2);
        break;

        case '/':
        if(num2 != 0){
            printf("Division: %d\n", num1 / num2);
        }else{
            printf("Cannot divide by zero. \n");
        }
        break;

        case '%':
        printf("Result: %d \n", num1 % num2);
        break;

        default:
        printf("Invalid Input. \n");
        break;
    }
    return 0;
}