#include <stdio.h>

int main() {
    int r;
    printf("Enter a rows: ");
    scanf("%d", &r);

    for(int i = 1; i <= r; i++) {
        for(int j = 0; j <=r- i; j++) 
            printf("  ");
        
         for(int j = 1; j <= i; j++) 
            printf("%d ",j);
        
        for(int j = i-1; j > 0; j--) 
            printf("%d ",j);

        printf("\n");
    }
    printf("\n");


    return 0;
}