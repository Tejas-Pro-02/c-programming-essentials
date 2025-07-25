#include<stdio.h>
#include<limits.h>

int main(){
    int arr[4][2] = {4,3,3,5,8,7,9,2};
    int max = INT_MIN;

    for(int i = 0; i<4; i++){
    for(int j = 0; j<2; j++){
        if(max < arr[i][j]) max = arr[i][j];
    }
    }
    printf("Maxium element is:- %d", max);
    

    return 0;

}