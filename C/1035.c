#include <stdio.h>

int main(){
    int A, B, C, D, soma, soma1;
    
    scanf("%d %d %d %d", &A, &B, &C, &D);
    
    soma = C + D;
    soma1 = A + B;
    
    if(B > C && D > A && soma > soma1 && C > 0 && D > 0 && A %2 ==0){
        printf("Valores aceitos\n");
    }else{
        printf("Valores nao aceitos\n");
    }

    return 0;
}