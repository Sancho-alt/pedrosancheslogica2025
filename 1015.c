#include <stdio.h>
#include <math.h>
int main()
{
    double X, Y, Z, W, A, B, D;
    scanf("%lf", &X);
    scanf("%lf", &Y);
    scanf("%lf", &Z);
    scanf("%lf", &W);
    A = pow(Z - X, 2);
    B = pow(W - Y, 2);
    D = sqrt(A + B);
    printf("%.4lf\n", D);
    
    return 0;
}
