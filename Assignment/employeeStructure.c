#include<stdio.h>

struct Employee{
    int empNo;
    char empName[20];
    char empAddress[20];
    int empAge;
};
int main(){
    struct Employee emp;
    
    printf("Enter your number:");
    scanf("%d", &emp.empNo);
    printf("Number = %d\n", emp.empNo);

    printf("Enter your name:");
    scanf("%s", &emp.empName);
    printf("Name = %s\n", emp.empName);

    printf("Enter your Address:");
    scanf("%s", &emp.empAddress);
    printf("Address = %s\n", emp.empAddress);

    printf("Enter your age:");
    scanf("%d", &emp.empAge);
    printf("Age = %d\n", emp.empAge);    

    return 0;
}