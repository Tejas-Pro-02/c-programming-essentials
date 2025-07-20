#include <stdio.h>

int main() {
    {
        int a = 5;
        printf("%d\n",a);
    }
    // printf("%d\n",a); --> This will give an error because 'a' is not in scope here.
    return 0;
}