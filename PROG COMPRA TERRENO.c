#include <stdio.h>
#include <math.h>
int main()
{
    int L=12;
    const float costTM=9256.00, porcIVA=0.16;
    float at,  pt, ar, pROM, AT, PT, costTERRENO , AP, pAGOt;
    ar= (L)*10.39;
    pROM= 2*(1.0/2.0*L)+ 10.39;
    at= sqrt(108) * 6 / 2;
    pt= (L+(1.0/2.0*L)+10.39);
    AT= (ar+at);
    PT= (pROM+pt);
    AP= (AT+PT);
    costTERRENO= AP* costTM;
    pAGOt= costTERRENO + (costTERRENO * porcIVA);
    printf ("lo que pago DON JOSE  es: %.2f\n", pAGOt);
    return 0;
}
