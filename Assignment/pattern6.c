#include<stdio.h>

main(){
    int row, col;
    for(row=1; row<=5; row++){
        char currentChar = 'A';
        for(col=1; col<=row; col++){
            printf(" %c ",currentChar);
            currentChar++;
        }
        printf("\n");
    }
}