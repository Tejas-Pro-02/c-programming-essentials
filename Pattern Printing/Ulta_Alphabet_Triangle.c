#include <stdio.h>

int main() {
    int r;
    printf("Enter a rows: ");
    scanf("%d", &r);

    for(int i = 1; i <= r; i++) {
        for(int j = 1; j <=r+1-i; j++) {
            printf("%c ",j+64);
        }
        printf("\n");
    }
    return 0;
}