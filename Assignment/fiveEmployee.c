#include<stdio.h>

struct Employee{
    int empNo;
    char empName[20];
    char empAddress[20];
    int empAge;
};
int main(){
    struct Employee emp[5];

    printf("Enter Information for five employees:\n");
    for(int i=0; i<5; i++){
        printf("Employee %d:\n", i+1);

        printf("Enter employee number:");
        scanf("%d", &emp[i].empNo);

        printf("Enter employee name:");
        scanf("%s", &emp[i].empName);

        printf("Enter employee Address:");
        scanf("%s", &emp[i].empAddress);

        printf("Enter employee age:");
        scanf("%d", &emp[i].empAge);
    }

    printf("\nInformation of five employees:\n");
    for(int i=0; i<5; i++){
        printf("Employee %d:\n", i+1);
        printf("Number = %d\n", emp[i].empNo);
        printf("Name = %s\n", emp[i].empName);
        printf("Address = %s\n", emp[i].empAddress);
        printf("Age = %d\n", emp[i].empAge);
        printf("\n");
    }
    
    return 0;
}