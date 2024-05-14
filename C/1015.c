#include <stdio.h>
#include <math.h>

int main(){
    int i;
    float p1[2], p2[2], equacao, y, x;
    
    for(i = 0; i < 2; i++){
        scanf("%f", &p1[i]);
    }
    
    for(i = 0; i < 2; i++){
        scanf("%f", &p2[i]);
    }
    
    x = p2[0] - p1[0];
    y = p2[1] - p1[1];
    
    equacao = sqrt( pow(x,2) + pow(y,2));
    
    printf("%.4f\n", equacao);

    return 0;
}