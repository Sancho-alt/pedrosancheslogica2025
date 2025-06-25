#include <stdio.h>

int main()
{
    char C [8];
    C[0] = 100,00;
    C[1] = 50,00;
    C[2] = 20,00;
    C[3] = 10,00;
    C[4] = 5,00;
    C[5] = 2,00;
    C[6] = 1,00;
    char Q [8];
    int N, I, R, A, X;
    scanf("%d", &N);
    printf("%d\n", N);
    for(I = 0; I < 7; I++){
        R = N % C[I];
        A = N - R;
        X = A / C[I];
        Q[I] = X;
        N = R;
        printf("%d nota(s) de R$ %d,00\n", Q[I], C[I]);
    }

    return 0;
}
