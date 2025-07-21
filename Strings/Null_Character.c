#include <stdio.h>

int main() {
    char arr[]={'T','\0','j','a','s','\0'};
    // Null character is identity that string is end
    // Any character array with null character at the end is known as string
    int size = sizeof(arr);
    printf("%d\n", size);
    for (int i = 0; i < size; i++)
        printf("%c",arr[i]);
    
    

    return 0;
}