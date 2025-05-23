#include <stdio.h>
 
int main() {
 
    char nome[100];
    double S, V, R;
    scanf("%s", nome);
    scanf("%lf", &S);
    scanf("%lf", &V);
    R = S + V*0.15;
    printf("TOTAL = R$ %.2lf\n", R);

    return 0;
 
    return 0;
}
