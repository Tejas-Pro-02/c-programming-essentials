#include <stdio.h>

void Japan(){
    printf("I am in Japan\n");
}

void Austrilia(){
    Japan();
    printf("I am in Australia\n");
}

void India(){
    Austrilia();
    printf("I am in India\n");
    
}

int main() {
    India()
    Printf("I am in main function");
    return 0;
}