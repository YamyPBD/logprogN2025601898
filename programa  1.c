#include <stdio.h>
int main ()
{
    int x,y;
    float z;
    x=2;
    y=4;
    z=((float)1.0/x)+((x+y)/3)+(2*(float)x/y);
    printf("El valor de z es: %f", z);
    return 0;
}
