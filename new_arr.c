#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    printf("Size of your array: ");
    scanf("%d", &n);

    int *p;
    p = (int*)malloc(n * sizeof(int));
    if(p == NULL){
        printf("Failed to allocate memory");
        return 1;
    }

    printf("\nEnter your array:\n");
    for(int i = 0; i < n; i++){
        printf("arr[%d]: ", i);
        scanf("%d", (p+i));
    }

    printf("\nYour array: ");
    for(int i = 0; i < n; i++){
        printf("%d ", *(p+i));
    }
    printf("\n");

    //Reallocating the memory

    int *temp = (int*)realloc(p, 2*n*sizeof(int));
    if(temp == NULL){
        printf("memory reallocation failed\n");
        free(p);
        return 1;
    }

    p = temp;

    for(int i = n; i < 2*n; i++){
        *(p+i) = 0;
    }

    printf("Updated array:\n");
    for(int i = 0; i < 2*n; i++){
        printf("%d ", *(p+i));
    }
    printf("\n");

    free(p);
    return 0;
}