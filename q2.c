#include <stdio.h>
#include <stdlib.h>


int main(){
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int *p;
    p = (int*)malloc(n * sizeof(int));
    if (p == NULL){
        printf("Failed to allocate memory");
        return 1;
    }

    printf("\nEnter the values of the array: \n");
    for(int i = 0; i < n; i++){
        printf("arr[%d]: ", i);
        scanf("%d", &p[i]);
    }

    printf("\nYour array: ");
    for(int i = 0; i < n; i++){
        printf("%d ", p[i]);
    }

    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += p[i];
    }
    printf("\nSum of the arrays: %d", sum);

    free(p);
    return 0;
}