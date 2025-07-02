#include <stdio.h>

int main()
{
    double A;
    scanf("%lf", &A);
    if (0 <= A) {
        if (A <= 25){
            printf("Intervalo [0,25]\n");
        }else{
            if (A <= 50){
                printf("Intervalo (25,50]\n");
            }else{
                if (A <= 75){
                    printf("Intervalo (50,75]\n");
                }else{
                    if (A <= 100){
                        printf("Intervalo (75,100]\n");
                    }else{
                        printf("Fora de intervalo\n");
                    }
                }
            }
        }
    }else {
        printf("Fora de intervalo\n");
    }
    
    return 0;
    
}
