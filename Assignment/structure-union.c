#include<stdio.h>

//Total size of structure is 28 bytes (structure can store values of multiple dafta types (int, char,double all).)
//Total size of union is 20 bytes

struct Person{
// union Person{
    int age;
    char name[20];
    float salary;
};

int main(){
    struct Person p;
    // union Person p;

    printf("Enter your age:");
    scanf("%d", &p.age);
    printf("Age=%d\n", p.age);

    printf("Enter your name:");
    scanf("%s", &p.name);
    printf("Name=%s\n", p.name);

    printf("Enter your salary:");
    scanf("%f", &p.salary);
    printf("Salary=%f\n", p.salary);

    return 0;
}