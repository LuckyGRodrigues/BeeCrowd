#include <stdio.h>

int seqFib[40], chFib[40];

void calcFib(int posicao){
    if(seqFib[posicao] == -1){
        calcFib(posicao - 1);
        calcFib(posicao - 2);

        seqFib[posicao] = seqFib[posicao - 1] + seqFib[posicao - 2];
        chFib[posicao] = chFib[posicao - 1] + chFib[posicao - 2] + 1;
    }
}

int main(){
    int totalPosicoes, entradaPosicao;

    seqFib[0] = 0;
    seqFib[1] = 1;

    chFib[0] = 1;
    chFib[1] = 1;

    for(int i = 2; i < 40; ++i){
        seqFib[i] = -1;
        chFib[i] = -1;
    }

    scanf("%d", &totalPosicoes);
    
    for(int i = 0; i < totalPosicoes; ++i){
        scanf("%d", &entradaPosicao);
        calcFib(entradaPosicao);
        printf("fib(%d) = %d calls = %d\n", entradaPosicao, chFib[entradaPosicao] - 1, seqFib[entradaPosicao]);
    }

    return 0;
}