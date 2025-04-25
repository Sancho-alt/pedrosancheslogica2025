/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int C1 = 11, N1 = 0, C2 = 22, N2 = 0;
    double P1 = 4.16, P2 = 8.32, P = 0;
    scanf( C1, P1, C2, P2, "%lf", "%lf", &N1, &N2);
    P = (P1 * N1) + (P2 * N2);
    printf("VALOR A PAGAR: R$ %lf\n", P);
    return 0;
}
