#include <stdio.h>

void swap(int *ptr1, int *ptr2){
    int com;
    com = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = com;
}

int main(){
    int n1;
    int n2;
    printf("x: ");
    scanf("%d", &n1);
    printf("y: ");
    scanf("%d", &n2);
    
    printf("\n The Swapped NUmbers: \n");
    swap(&n1, &n2);
    printf("x: %d\ny: %d\n ", n1, n2);
    return 0;
}
