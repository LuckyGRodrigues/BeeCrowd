#include <stdio.h>

int main(){
    int a, b, c, d;
    float A, B, calc;
    
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%f", &A);
    
    scanf("%d", &c);
    scanf("%d", &d);
    scanf("%f", &B);
    
    calc = (b * A + d * B);
    
    printf("VALOR A PAGAR: R$ %.2f\n", calc);

    return 0;
}