#include <stdio.h>

int main()
{
    int N, H, M, S, R, X;
    scanf("%d", &N);
    if (N / 365 > 0){
        R = N % 365;
        X = N - R;
        H = X / 365;
    } else{
        H = 0;
    }
    N = N % 365;
    if (N / 30 > 0){
        R = N % 30;
        X = N - R;
        M = X / 30;
    } else {
        M = 0;
    }
    S = N % 30;
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", H, M, S);
    
    return 0;
}
