#include <stdio.h>
#include <stdlib.h>

void addMat(int arr1[][10], int arr2[][10], int sum[][10], int r, int c){
    for(int i = 0 ; i < r; i++){
        for(int j = 0; j < c; j++){
            sum[i][j] = arr1[i][j] + arr2[i][j];
        }
    }

}

int main(){
    int row, col;

    printf("Enter the number of rows: ");
    scanf("%d", &row);
    printf("Enter the number of columns: ");
    scanf("%d", &col);

    int mat1[10][10], mat2[10][10], sum[10][10];
    printf("Enter elements of the first matrix:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &mat1[i][j]);
        }
    }

    printf("Enter elements of the second matrix:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &mat2[i][j]);
        }
    }

    addMat(mat1, mat2, sum, row, col);

    printf("Resultant matrix after addition:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
}