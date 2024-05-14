#include <stdio.h>

int main()
{
    float tempoMin, kmH, calc, subcalc;
    
    scanf("%f %f", &tempoMin, &kmH);
    
    calc = kmH * tempoMin;
    
    subcalc = calc / 12;
    
    printf("%.3f\n", subcalc);

    return 0;
}
