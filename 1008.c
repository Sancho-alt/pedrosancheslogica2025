#include <stdio.h>

int main()
{
    int N, H;
    double V, S;
    scanf("%d", &N);
    scanf("%d", &H);
    scanf("%lf", &V);
    S=V*H;
    printf("NUMBER = %d\nSALARY = U$ %.2lf\n", N, S);

    return 0;
}
