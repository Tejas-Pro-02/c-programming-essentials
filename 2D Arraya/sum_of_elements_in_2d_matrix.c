#include<stdio.h>

int main(){
    int arr[4][2] = {4,80,43,7,1,8,7,2};
    int sum = 0;

    for(int i = 0; i<4; i++){
    for(int j = 0; j<2; j++){
        sum += arr[i][j];
    }
    }
    printf("Sum of elements is:- %d", sum);
    

    return 0;

}