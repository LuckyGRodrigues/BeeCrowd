#include <stdio.h>

int main(){
    int num, horasTrabalhadas;
    float rendaHora, calculo;
    
    scanf("%d", &num);
    scanf("%d", &horasTrabalhadas);
    scanf("%f", &rendaHora);
    
    calculo = rendaHora * horasTrabalhadas;
    
    printf("NUMBER = %d\n", num);
    printf("SALARY = U$ %.2f\n", calculo);

    return 0;
}