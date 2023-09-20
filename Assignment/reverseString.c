#include<stdio.h>
#include<string.h>

void reverseString(char str[], int start, int end){
    if(start >= end){
        return;
    }

    char temp = str[start];
    str[start] = str[end];
    str[end] = temp;

    reverseString(str, start + 1, end - 1);  //Recursive function
}

int main(){
    char input[20];

    printf("Enter a string: ");
    gets(input);

    int lengt = strlen(input);

    reverseString(input, 0, lengt - 1);

    printf("Reversed string: %s\n", input);
    return 0;
}