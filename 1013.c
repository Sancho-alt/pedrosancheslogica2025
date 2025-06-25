#include <stdio.h> 
#include <stdlib.h>
int main()
{
    int A, B, C, M, N;
    scanf("%d", &A);
    scanf("%d", &B);
    scanf("%d", &C);
    M = (A + B + abs(A - B))/2;
    N = (M + C + abs(M - C))/2;
    printf("%d eh o maior\n", N);
    return 0;
}
