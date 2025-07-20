#include <stdio.h>

int main() {
    int a = 10;
    int* b = &a;
    int** c = &b;

    printf("%d\n",a);
    printf("%p\n",b);
    printf("%p\n",c);

    printf("%d\n", *b); // dereference b to get the value of a --> *(&a) = 10
    printf("%d\n", **c); // dereference c to get the value of b --> *(*(&b)) = *b = *(&a) = 10


    return 0;
}