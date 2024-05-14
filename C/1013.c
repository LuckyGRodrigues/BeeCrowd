#include <stdio.h>

int main(){
    int A[3], i, aux=0;
    
    for(i = 0; i < 3; i++){
        scanf("%d", &A[i]);
        if(A[i] > aux)
            aux = A[i];
    }
    
    printf("%d eh o maior\n", aux);

    return 0;
}