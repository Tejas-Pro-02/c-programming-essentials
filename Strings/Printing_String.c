#include <stdio.h>

int main() {
    char name1[]= "Tejas Khurd";
    char name2[]= "Teja\0 Khurd";
    char arr[]={'T','e','j','a','s','\0'}; //--> if null character is not written then garbage value will also get printed
    printf("%s\n",name1);
    printf("%s\n",arr);
    printf("%s\n",name2);

    int size = sizeof(name2);
    for (int i = 0; i < size; i++)
        printf("%c",name2[i]);
    
    return 0;
}