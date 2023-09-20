#include<stdio.h>

    int findMax(int arr[], int size){
        int max = arr[0];

        for(int i=1; i<size; i++){
            if(arr[i] > max){
                max = arr[i];
            }
        }
        return max;
    }
    
int main(){
    int size;
    printf("Enter the size of array: ");
    scanf("%d",&size);

    if(size <= 0){
        printf("Invalid input.\n");
        return 1;  //Exit with an error code
    }

    int arr[20];
    printf("Enter %d elements:\n",size);
    for(int i=0; i<size; i++){
        scanf("%d", &arr[i]);
    }
    
    int maximum = findMax(arr, size);
    printf("The maximum number in the array is: %d", maximum);
    return 0;
}