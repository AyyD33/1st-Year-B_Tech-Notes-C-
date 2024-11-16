#include <stdio.h>
#include <stdlib.h>

int main(){
    int row, col;

    printf("Enter the number of rows: ");
    scanf("%d", &row);
    printf("Enter the number of column: ");
    scanf("%d", &col);

    int **p = (int**)malloc(row * sizeof(int));
    if(p == NULL){
        printf("Failed to allocate memory");
        return 1;
    }

    for(int i = 0; i < row; i++){
        p[i] = (int*)malloc(col * sizeof(int));
        if(p[i] == NULL){
            printf("Failed to allocate memory");
            return 1;
        }
    }
    printf("Enter the elements of 2D Array:\n");
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            printf("arr[%d][%d]: ",i, j);
            scanf("%d", &p[i][j]);
        }
    }

    printf("\nYour Array:\n");
    for(int i = 0; i < row; i++){
        for(int j = 0 ; j < col; j++){
            printf("%d ", p[i][j]);
        }
        printf("\n");
    }

    //Expand the matrix
    int new_row, new_col;
    printf("Enter new number of rows: ");
    scanf("%d", &new_row);
    printf("Enter new number of columns: ");
    scanf("%d", &new_col);

    p = (int**)realloc(p,new_row * sizeof(int*));
    if(p == NULL){
        printf("Memory allocation failed\n");
        return 1;
    }

    for(int i = 0; i < new_row; i++){
        if(i >= row){
            p[i] = (int*)malloc(new_col * sizeof(int));
            if (p[i] == NULL) {
                printf("Memory allocation failed for new rows!\n");
                return 1;
            }
            for(int j = 0; j < new_col; j++){
                p[i][j] = 0;
            }
        } else{
            p[i] = (int*)realloc(p[i], new_col * sizeof(int));
            if (p[i] == NULL) {
                printf("Memory reallocation failed for columns in row %d!\n", i);
                return 1;
            }
            for(int j = col; j < new_col; j++){
                p[i][j] = 0;
            }
        }
    }

    // Print the updated 2D array
    printf("Updated 2D array:\n");
    for (int i = 0; i < new_row; i++) {
        for (int j = 0; j < new_col; j++) {
            printf("%d ", p[i][j]);
        }
        printf("\n");
    }


    for(int i = 0; i < new_row; i++){
        free(p[i]);
    }
    free(p);

    return 0;
}