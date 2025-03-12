#include <stdio.h>
#include <math.h>

int main()
{
    int L;
    float A,B,D,C,E,F,C2,E2,Pt,At;
    L = 2;
    A = (1.0 / 4.0) * L;
    B = (1.0 / 2.0) * L;
    D = (3.0 / 2.0) * L;
    C = sqrt((D * D) + (L * L));
    E = (D * L) / 2.0;
    F = (2 * L) * A;
    C2= sqrt((L * L) + (L * L));
    E2 = (L * L) / 2.0;

    Pt = (2 * A) + (2 * L) + (2 * B) + C + (2*C2) + D;
    At = (2 * E2) + (L * L) + F + E;

    printf("Area total: %.2f\n", At);
    printf("Perimetro total: %.2f\n", Pt);

    return 0;
}
