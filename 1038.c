#include <stdio.h>

int main()
{
    int C, Q;
    double P;
    scanf("%d", &C);
    scanf("%d", &Q);
    if(C == 1){
        P = Q * 4;
    }
    if(C == 2){
        P = Q * 4.5;
    }
    if(C == 3){
        P = Q * 5;
    }
    if(C == 4){
        P = Q * 2;
    }
    if(C == 5){
        P = Q * 1.5;
    }
    printf("Total: R$ %.2lf\n", P);
    
    return 0;
    
}
