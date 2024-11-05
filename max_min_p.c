#include <stdio.h>

int check(int arr[], int n, int *max, int *min){
    *min = arr[0];//Initializing min to first element
    *max = arr[0];//Initializing max to first element

    for(int i = 0; i < n; i++){
        if(arr[i] < *min){
            *min = arr[i]; //Update min if current element is smaller
        }
        if(arr[i] > *max){
            *max = arr[i];
        }
    }
}


int main(){
    int num[] = {12,14,15,6,8,22,29}; //Example Array
    int n = sizeof(num)/sizeof(num[0]);  //Calculating the Array Size
    int min, max;


    //Using the function
    check(num, n, &max, &min);

    //Printing the max and min number
    printf("Maximum: %d\n", max);
    printf("Minimum: %d\n", min);
}