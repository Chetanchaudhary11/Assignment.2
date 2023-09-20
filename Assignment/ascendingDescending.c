#include<stdio.h>

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void sortAscending(int arr[], int size){
    for(int i=0; i<size-1; i++){
        int minIndex = i;
        for(int j=i+1; j<size; j++){
            if(arr[j] < arr[minIndex]){
                minIndex = j;
            }
        }
        swap(&arr[i], &arr[minIndex]);
    }
}
void sortDescending(int arr[], int size){
    for(int i=0; i<size-1; i++){
        int maxIndex = i;
        for(int j=i+1; j<size; j++){
            if(arr[j] > arr[maxIndex]){
                maxIndex = j;
            }
        }
        swap(&arr[i], &arr[maxIndex]);
    }
}

int main(){
    int size;
    
    printf("Enter the size of the arrays: ");
    scanf("%d", &size);

    int arr1[20], arr2[20];

    printf("Enter %d elements for the first array: \n", size);
    for(int i=0; i<size; i++){
        scanf("%d", &arr1[i]);
    }

    printf("Enter %d elements for the second array: \n", size);
    for(int i=0; i<size; i++){
        scanf("%d", &arr2[i]);
    }

    int choice;
    printf("Choose sorting order:\n");
    printf("1. Ascending\n");
    printf("2. Descending\n");
    scanf("%d", &choice);

    if(choice == 1){
        sortAscending(arr1, size);
        sortAscending(arr2, size);
    }else if(choice == 2){
        sortDescending(arr1, size);
        sortDescending(arr2, size);
    }else{
        printf("Invalid choice.\n");
    }

    printf("Sorted arrays: \n");
    printf("First array: ");
    for(int i=0; i<size; i++){
        printf("%d", arr1[i]);
    }
    printf("\n");
    printf("Second array: ");
    for(int i=0; i<size; i++){
        printf("%d", arr2[i]);
    }
    printf("\n");

    return 0;
}