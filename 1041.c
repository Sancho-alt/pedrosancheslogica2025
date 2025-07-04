#include <stdio.h>

int main()
{
    double X, Y;
    scanf("%lf", &X);
    scanf("%lf", &Y);
    
    if(X != 0){
        if(X > 0){
            if (Y != 0){
                if (Y > 0){
                    printf("Q1\n");
                }else{
                    //y < 0//
                    printf("Q4\n");
                }
            }else{
                //y = o//
                printf("Eixo X\n");
            }
        }else{
            //x <0//
            if (Y != 0){
                if (Y > 0){
                    printf("Q2\n");
                }else{
                    //Y < 0//
                    printf("Q3\n");
                }
            }else{
                //y = 0//
                printf("Eixo X\n");
            }
        }
    }else{
        //x = 0//
        if (Y != 0){
            printf("Eixo Y\n");
        }else{
            printf("Origem\n");
        }
        
        
    }
    
    return 0;
}
