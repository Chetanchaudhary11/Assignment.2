#include<stdio.h>

int main(){
    int rows;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    int row, col;
    for(row=1; row<=rows; row++){
        for(col=1; col<=row; col++){
            if(col % 2 == 0){
                printf("0");
            }else{
                printf("1");
            }
        }
        printf("\n");
    }
    return 0;
}