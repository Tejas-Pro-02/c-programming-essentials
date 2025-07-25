#include<stdio.h>

int main(){
    int arr1[4][2] = {4,3,3,5,8,6,9,2};
    int arr2[4][2] = {1,2,2,4,5,4,5,3};
    int arr3[4][2];

    printf("Array 1 elements are:- \n");
    for(int i = 0; i<4; i++){
    for(int j = 0; j<2; j++){
        printf("%d ", arr1[i][j]);
    }
    printf("\n");
    }

    printf("\n");

    printf("Array 2 elements are:- \n");
    for(int i = 0; i<4; i++){
    for(int j = 0; j<2; j++){
        printf("%d ", arr2[i][j]);
    }
    printf("\n");
    }

    printf("\n");

    printf("Adding array 1 and 2:- \n");
        for(int i = 0; i<4; i++){
    for(int j = 0; j<2; j++){
        arr3[i][j] = arr1[i][j]+arr2[i][j];
        printf("%d ", arr3[i][j]);
        
    }
    printf("\n");
    }
    return 0;
}