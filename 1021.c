#include <stdio.h>

int main()
{
    double N, A, Y, Alt;
    int I, M, R, X, Q, B;
    char Nota[7];
    char Moeda[7];
    Nota[0] = 100;
    Nota[1] = 50;
    Nota[2] = 20;
    Nota[3] = 10;
    Nota[4] = 5;
    Nota[5] = 2;
    Moeda[0] = 100;
    Moeda[1] = 50;
    Moeda[2] = 25;
    Moeda[3] = 10;
    Moeda[4] = 5;
    Moeda[5] = 1; 
    scanf("%lf", &N);
    M = N;
    Alt = N - M;
    printf("NOTAS:\n");
    for (I = 0; I < 6; I++){
        R = M % Nota[I];
        X = M - R;
        Q = X / Nota[I];
        M = R;
        printf("%d nota(s) de R$ %d.00\n", Q, Nota[I]);
    }
    Alt = Alt + M;
    A = Alt * 100;
    B = A;
    printf("MOEDAS:\n");
    for(I = 0; I < 6; I++){
        R = B % Moeda[I];
        X = B - R;
        Q = X / Moeda[I];
        B = R;
        Y = Moeda[I];
        Y = Y / 100;
        printf("%d moeda(s) de R$ %.2lf\n", Q, Y);
    }

    return 0;
}
