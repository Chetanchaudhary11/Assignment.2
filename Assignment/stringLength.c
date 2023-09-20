#include<stdio.h>

int main(){
    char str[20];
    int length = 0;

    printf("Enter a string: ");
    gets(str);

    while(str[length] != '\0'){   //null character is used to indicate the end of the string
        length++;
    } 
    printf("Length of the string: %d\n", length);

    return 0;
}