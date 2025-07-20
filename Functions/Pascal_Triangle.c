#include <stdio.h>

int fact(int n){
    int f = 1;
    for (int i = 1; i <= n; i++)
    {
        f *= i;
        
    }
    return f;
}

int ncr(int n, int r){
    return fact(n) / (fact(r) * fact(n-r));
}
int main() {
    int n;
    printf("Enter the rows: ");
    scanf("%d",&n);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <=n-i; j++)
            printf("  ");
        
        for(int j = 1; j <= i; j++)
            printf("%d   ",ncr(i-1,j-1));
        
        printf("\n");
    }
    
    return 0;
}