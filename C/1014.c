#include <stdio.h>

int main(){
    int km;
    float litro, media;
    
    scanf("%d", &km);
    scanf("%f", &litro);
    
    media = km / litro;
    
    printf("%.3f km/l\n", media);

    return 0;
}