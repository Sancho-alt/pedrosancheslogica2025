#include <stdio.h>

int main()
{
    double R, P, V;
    scanf("%lf", &R);
    P = 3.14159;
    V = (4.0/3.0)*P*R*R*R;
    printf("VOLUME = %.3lf\n", V);
    
    return 0;
}
