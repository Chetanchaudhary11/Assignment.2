#include<stdio.h>
int main(){
    int n,i,f1,f2,f3;
    printf("Enter any number:");
    scanf("%d",&n);
    f1 = 0;
    f2 = 1;
    printf("%d %d",f1,f2);

    for(i = 1; i < n; i++){
        f3 = f1 + f2;
        printf(" %d ",f3);
        f1 = f2;
        f2 = f3;
    }
    return 0;
}