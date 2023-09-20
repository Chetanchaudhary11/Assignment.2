#include<stdio.h>

main(){
    int row, col;
    for(row=1; row<=6; row++){
        for(col=1; col<=row; col++){
            printf("*");
        }
        printf("\n");
    }
    for(row=5; row>=1; row--){
        for(col=1; col<=row; col++){
            printf("*");
        }
        printf("\n");
    }
}