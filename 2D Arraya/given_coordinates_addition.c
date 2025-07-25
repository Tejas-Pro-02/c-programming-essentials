#include<stdio.h>

int main(){
    int arr[5][4] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    int l1_r1 = 2;
    int l1_r2 = 15;
    int sum = 0;

    printf("Given arry:- \n");

    for(int i = 0; i<5; i++){
    for(int j = 0; j<4; j++){
        printf("%d ",arr[i][j]);
        
    }
    printf("\n");
    }

    printf("\n");
    printf("Required array");


    for(int i = 0; i<=3; i++){
    for(int j = 1; j<=2; j++){
        printf("%d ",arr[i][j]);
        sum += arr[i][j];
    }
    printf("\n");
    }

    printf("\n");;

    printf("Sum of elements is:- %d", sum);
    

    return 0;

}