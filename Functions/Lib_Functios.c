#include <stdio.h>
#include <math.h>

int main() {
    int root = sqrt(16);
    printf("SQRT\n");
    printf("%d\n", root);
    printf("%d\n", sqrt(16));
    printf("%f\n\n", sqrt(16));


    int power = pow(2,5);
     printf("POW\n");
    printf("%d\n\n", power);

    int cuberoot = cbrt(8);
     printf("CBRT\n");
    printf("%d\n", cuberoot);
    printf("%d\n",  cbrt(8));
    printf("%f\n\n",  cbrt(8));

    float x;
    printf("Enter a base number: ");
    scanf("%f", &x);

    int y;
    printf("Enter an exponent: ");
    scanf("%d", &y);

    float ans = pow(x,y);
    printf("%f raise to %d is: %f\n", x,y,ans);
    return 0;
}