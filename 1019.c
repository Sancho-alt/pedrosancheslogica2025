#include <stdio.h>

int main()
{
    int N, H, M, S, R, X;
    scanf("%d", &N);
    if (N / 3600 > 0){
        R = N % 3600;
        X = N - R;
        H = X / 3600;
    } else{
        H = 0;
    }
    N = N % 3600;
    if (N / 60 > 0){
        R = N % 60;
        X = N - R;
        M = X / 60;
    } else {
        M = 0;
    }
    S = N % 60;
    printf("%d:%d:%d\n", H, M, S);
    
    return 0;
}
