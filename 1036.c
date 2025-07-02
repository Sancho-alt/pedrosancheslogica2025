#include <stdio.h>
#include <math.h>

int main()
{
    double A, B, C, D, M, N;
    scanf("%lf", &A);
    scanf("%lf", &B);
    scanf("%lf", &C);
    if (A != 0){
        D = pow(B, 2) - 4 * A * C;
        D = sqrt(D);
        if (D >= 0) {
            M = (B * (-1) + D) / (2 * A);
            N = (B * (-1) - D) / (2 * A);
            printf("R1 = %.5lf\nR2 = %.5lf\n", M, N);
        } else {
            printf("Impossivel calcular\n");
        }
    } else{
        printf("Impossivel calcular\n");
    }
    
    return 0;
}
