#include<stdio.h>

int main(){
    int i, num, evenCount=0, oddCount=0, evenSum=0, oddSum=0;

    printf("Enter 10 numbers: \n");
    for(i=1; i<=10; i++){
        printf("Enter number %d: ", i);
        scanf("%d", &num);

        if(num % 2 == 0){
            printf("even numbers: %d ", num);
            evenCount++;
            evenSum += num;
        }else{
            printf("%d is odd number.\n", num);
            oddCount++;
            oddSum += num;
        }
    }
   
    printf("Number of even numbers: %d\n", evenCount);
    printf("Number of  odd numbers: %d\n", oddCount);
    printf("Sum of even numbers: %d\n", evenSum);
    printf("Sum of odd numbers: %d", oddSum);
    return 0;
}