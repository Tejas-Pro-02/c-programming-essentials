#include <stdio.h>

int main() {
    char arr[]={'T','e','j','a','s'};
    int size = sizeof(arr);
    for (int i = 0; i < size; i++)
        printf("%c",arr[i]);
    
    

    return 0;
}