#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int *p;
    p = (int*) calloc(n, sizeof(int));
    if (p == NULL){
        printf("Failed to allocate memory");
        return 1;
    }

    printf("\nYour array: ");
    for(int i = 0; i < n; i++){
        printf("%d ", p[i]);
    }

    free(p);
    return 0;
}