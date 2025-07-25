#include<stdio.h>

int main(){
    int arr[4][2] = {1,4,6,4,4,7,2,1};
    int product = 1;

    for(int i = 0; i<4; i++){
    for(int j = 0; j<2; j++){
        product *= arr[i][j];
    }
    }
    printf("Product os elements is:- %d", product);
    

    return 0;

}