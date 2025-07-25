#include<stdio.h>
#include<limits.h>

int main(){
    int arr[4][2] = {4,3,3,1,8,7,9,2};
    int min = INT_MAX;

    for(int i = 0; i<4; i++){
    for(int j = 0; j<2; j++){
        if(min > arr[i][j]) min = arr[i][j];
    }
    }
    printf("Maxium element is:- %d", min);
    

    return 0;

}