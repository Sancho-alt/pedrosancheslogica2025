#include <stdio.h>
#include <string.h>
int main()
{
   char Cifra[51];
   char Decod[51];
   int D, L, I, A, N;
   scanf("%d", &N);
   while(N>0){
        N--;
        scanf("%s", Cifra);
        scanf("%d", &D);
       L = strlen(Cifra);
       for(I = 0; I<L; I++){
           A = Cifra[I]-65;
           if(D>A){
               Cifra[I] = 90-(D-A-1);
           } else{
               Cifra[I] = Cifra[I]-D;
           }
       }
       printf("%s\n", Cifra);
   }
    return 0;
}
