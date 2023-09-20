#include<stdio.h>

int main(){
    int choice, years, days;

    printf("Choose an option: \n");
    printf("1. Convert years to days\n");
    printf("2. Convert days to years\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if(choice == 1){
        printf("Enter number of years: ");
        scanf("%d", &years);
        
        days = years * 365;
        printf("%d years = %d days.\n", years, days);
    }else if(choice == 2){
        printf("Enter number of days: ");
        scanf("%d", &days);
        
        years = days / 365;
        printf("%d days = %d years.\n", days, years);
    }else{
        printf("Invalid Input.");
    }
    return 0;
}