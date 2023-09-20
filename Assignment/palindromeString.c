#include<stdio.h>
#include<string.h>

int main(){
    char str[20];
    char reverseStr[20];
    int palindrome = 1; //Assume it's palindrome by default (suraj = jarus)

    printf("Enter a string: ");
    gets(str);
    
    int length = strlen(str);

    //Reverse the string
    for(int i=0; i<length; i++){
        reverseStr[i] = str[length-i-1];
    }

    reverseStr[length] = '\0';

    //check it's a palindrome
    for(int i=0; i<length; i++){
        if(str[i] != reverseStr[i]){
            palindrome = 0;  //It's not a palindrome
            break;  //No need to check further
        }
    }

    if(palindrome){
        printf("The string is a palindrome. \n");
    }else{
        printf("The string is not a palindrome. \n");
    }

    return 0;
}