#include <stdio.h>
#include <stdlib.h>

int main(){
    int row, col;

    printf("Enter the number of rows: ");
    scanf("%d", &row);
    printf("Enter the number of columns: ");
    scanf("%d", &col);
   
    int *p = (int*)calloc(row, sizeof(int));
    if (p == NULL){
        printf("Failed to allocate memory");
        return 1;
    }

    for(int i = 0; i < row; i++){
        *(p+i) = (int*)calloc(col, sizeof(int));
        if((p+i) == NULL){
            printf("Failed to allocate memory");
            return 1;
        }
    }
    printf("The Array: ");
    for(int i = 0; i < row; i++){
        for(int j = 0 ; j < col; j++){
            printf("%d ", *(p+i)+j);
        }
        printf("\n");
    }

    for(int i = 0; i < row; i++){
        free(p+i);
    }
    free(p);
    return 0;
}