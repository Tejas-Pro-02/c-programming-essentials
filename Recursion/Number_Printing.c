#include <stdio.h>

void print1(int a){
    if (a==0) return;
    printf("%d ", a);
    print1(a-1); 
    return;
}
void print2(int a){
    if (a == 0) return;
    print2(a - 1);     
    printf("%d ", a);   
}
int main() {
    print1(5);
    printf("\n");
    print2(5);
    return 0;
}