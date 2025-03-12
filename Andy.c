#include <stdio.h>
#include <math.h>
int main ()
{

    int L;
    float A,B,C,D,E,F,G,AT,PT;
    L=7;
    A=(1.0/5.0)*L;
    B=(3.0/5.0)*L;
    C=(1.0/2.0)*L;
    D=(A*B)*2;
    E=(A*A)*2;
    F=((1.0/2.0)*3.1416)*pow (C,2);
    G=(L*L);
    AT=(D+E+F+G);
    PT=(A*17)+(B*2)+(3.1416*C);
    printf("El valor de AREA TOTAL es: %f\n", AT);
    printf("El valor de PERIMETRO TOTAL es: %f\n", PT);

    return 0;
}
