#include <stdio.h>

int main()
{
    double A, B, C, P;
    scanf("%lf", &A);
    scanf("%lf", &B);
    scanf("%lf", &C);
    if (A < B + C){
        if (B < C + A){
            if (C < C + B){
                P = A + B + C;
                printf("Perimetro = %.1lf\n", P);
            } else{
                A = (A + B) / 2 * C;
                printf("Area = %.1lf\n", A);
            }
        } else {
            A = (A + B) / 2 * C;
            printf("Area = %.1lf\n", A);
        }
    } else {
        A = (A + B) / 2 * C;
        printf("Area = %.1lf\n", A);
    }
    
    return 0;
}
