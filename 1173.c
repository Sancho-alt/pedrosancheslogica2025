#include <stdio.h>
 
int main() {
 
    int V = 0;
    scanf("%d", &V);
    int N[10];
    N[0]=("%d", V);
    N[1]=N[0]*2;
    N[2]=N[0]*4;
    N[3]=N[0]*8;
    N[4]=N[0]*16;
    N[5]=N[0]*32;
    N[6]=N[0]*64;
    N[7]=N[0]*128;
    N[8]=N[0]*256;
    N[9]=N[0]*512;
    printf("N[0] = %d\nN[1] = %d\nN[2] = %d\nN[3] = %d\nN[4] = %d\nN[5] = %d\nN[6] = %d\nN[7] = %d\nN[8] = %d\nN[9] = %d\n", N[0], N[1], N[2], N[3], N[4], N[5], N[6], N[7], N[8], N[9]);
   
    return 0;
}
