#include <stdio.h>
#include <stdlib.h>

void shift(int arr[], int n){
    if(n <= 0) return;
    
    int temp = arr[n - 1];
    for(int i = 0; i < n; i++){
        arr[n - i] = arr[n - i -1]; 
    }
    arr[0] = temp;
}


int main(){
    int *p;
    int n = 100;
    
    printf("Enter the size of array: ");
    scanf("%d", &n);
    
    if (n <= 0) {
        printf("Array size must be positive.\n");
        return 1;
    }
    
    p = (int*)malloc(n * sizeof(int));
    if (p == NULL){
        printf("Memory Allocation Failed\n");
        return 1;
    }

    printf("Enter your Array: \n");
    for(int i = 0 ; i < n; i++){
        scanf("%d", p + i);
    }

    printf("Your array: ");
    for(int i = 0 ; i < n; i++){
        printf("%d ", *(p + i));
    }
    printf("\n");

    shift(p, n);

    printf("Shifted Array: ");
    for(int i = 0; i < n ; i++){
        printf("%d ", *(p + i));
    }
    free(p);
    return 0;    
}