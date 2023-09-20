#include<stdio.h>
int getfactorial(int n){
    if(n > 1){
        return n * getfactorial(n-1);
    }
}
int main(){
    int num, factorial;

    printf("Enter a Number: ");
    scanf("%d", &num);

    factorial = getfactorial(num);

    printf("Factorial = %d", factorial);
    return 0;
}