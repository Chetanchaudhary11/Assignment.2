#include<stdio.h>

int main(){
    int mat1[2][2], mat2[2][2], result[2][2];

    printf("Enter 4 numbers for the first matrix:\n");
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            scanf("%d", &mat1[i][j]);
        }
    }

    printf("Enter 4 numbers for the second matrix:\n");
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            scanf("%d", &mat2[i][j]);
        }
    }

    printf("Matrix Addition:\n");
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            result[i][j] = mat1[i][j] + mat2[i][j];
            printf(" %d ", result[i][j]);
        }
        printf("\n");
    }

    printf("Matrix Subtraction:\n");
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            result[i][j] = mat1[i][j] - mat2[i][j];
            printf(" %d ", result[i][j]);
        }
        printf("\n");
    }

    printf("Matrix Multiplication:\n");
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            result[i][j] = 0;
            for(int k=0; k<2; k++){
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
            printf(" %d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}