#include <stdio.h>

int main()
{
    double A, B, C, Tri, Cir, Tra, Qua, Ret;
    scanf("%lf", &A);
    scanf("%lf", &B);
    scanf("%lf", &C);
    Tri = A*C/2;
    Cir = 3.14159*C*C;
    Tra = (A+B)*C/2;
    Qua = B*B;
    Ret = A*B;
    printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n", Tri, Cir, Tra, Qua, Ret);

    return 0;
}
