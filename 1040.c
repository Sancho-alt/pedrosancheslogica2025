#include <stdio.h>

int main()
{
    double A, B, C, D, M, E, N;
    scanf("%lf", &A);
    scanf("%lf", &B);
    scanf("%lf", &C);
    scanf("%lf", &D);
    M = (A * 2 + B * 3 + C * 4 + D) / 10;
    printf("Media: %.1lf\n", M);
    
    if(M >= 7){
        printf("Aluno aprovado.\n");
    } else{
        
        if(M < 5){
            printf("Aluno reprovado.\n");
        } else{
            
            if(5 <= M <= 6.9){
                printf("Aluno em exame.\n");
                scanf("%lf", &E);
                printf("Nota do exame: %.1lf\n", E);
                N = (E + M)/2;
                if(N >= 5){
                    printf("Aluno aprovado.\n");
                } else{
                    printf("Aluno reprovado.\n");
                }
                printf("Media final: %.1lf\n", N);
            }
        }
    }
    
    return 0;
    
}
