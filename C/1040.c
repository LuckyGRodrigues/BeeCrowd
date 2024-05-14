#include <stdio.h>

int main(){
    int i;
    float notas[4], aux, aux1, pesos[4] = {2, 3, 4, 1};
    
    for(i = 0; i < 4; i++){
        scanf("%f", &notas[i]);
    }
    
    notas[0] = notas[0] * 2.0;
    notas[1] = notas[1] * 3.0;
    notas[2] = notas[2] * 4.0;
    notas[3] = notas[3] * 1.0;
    
    aux1 = 0;
    
    for(i = 0; i < 4; i++){
        aux1 += notas[i];
    }
    
    aux1 /= 10;
    
    printf("Media: %.1f\n", aux1);
    
    if(aux1 >= 5 && aux1 <= 6.9){
        printf("Aluno em exame.\n");
        
        scanf("%f", &aux);
        
        aux1 = (aux1 + aux) / 2.0;
        
        if(aux1 >= 5){
            printf("Nota do exame: %.1f\n", aux);
            printf("Aluno aprovado.\n");
            printf("Media final: %.1f\n", aux1);
            
        }else{
            printf("Nota do exame: %.1f\n", aux);
            printf("Aluno reprovado.\n");
            printf("Media final: %.1f\n", aux1);
        }
            
    }else if(aux1 < 5){
        printf("Aluno reprovado.\n");
        
    }else{
        printf("Aluno aprovado.\n");
    }
    return 0;
}