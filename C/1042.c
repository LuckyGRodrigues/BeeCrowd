#include <stdio.h>

int main(){
    int num[3], numAux[3], aux, i, j;

    for(i = 0; i < 3; i++){
        scanf("%d", &num[i]);
        numAux[i] = num[i];
    }

    for(i = 0; i < 3; i++){
        for(j = i + 1; j < 3; j++){
            if(num[i] > numAux[j]){
                aux = num[i];
                num[i] = num[j];
                num[j] = aux;
            }
        }
    }

    for(i = 0; i < 3; i++){
        printf("%d\n", num[i]);
    }

    printf("\n");

    for(i = 0; i < 3; i++){
        printf("%d\n", numAux[i]);
    }

    return 0;
}