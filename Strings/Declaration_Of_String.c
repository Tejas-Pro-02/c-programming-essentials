#include <stdio.h>

int main() {
    char arr[]="Tejas loves coding";
    printf("%c\n", arr[0]);
    char name[]="T\0jas\0";
    int size1 = sizeof(arr);
    int size2 = sizeof(name);
    printf("Size of name is: %d\n", size2);
    for (int i = 0; i < size2; i++)
        printf("%c",name[i]);

    printf("\n");

    for (int i = 0; i < size1; i++)
        printf("%c",arr[i]);
    
    printf("\n");
    char null ='\0'; // --> Only one character with two symbols \ and 0
    printf("%c\n", null);
    printf("ASCII value of null character is: %d\n", null);
    return 0;
}