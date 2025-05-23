#include <stdio.h>

int main()
{
    int C, N, D, M;
    double P, Q, V, W, T;
    scanf("%d", &C);
    scanf("%d", &N);
    scanf("%lf", &P);
    scanf("%d", &D);
    scanf("%d", &M);
    scanf("%lf", &Q);
    V=N*P;
    W=M*Q;
    T=V+W;
    printf("VALOR A PAGAR: R$ %.2lf\n", T);
}
