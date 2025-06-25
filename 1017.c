#include <stdio.h>

int main(){
    double S, T, V, L;
    scanf("%lf", &T);
    scanf("%lf", &V);
    S = V * T;
    L = S / 12;
    printf("%.3lf\n", L);
}
