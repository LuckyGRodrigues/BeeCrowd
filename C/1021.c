#include <stdio.h>

int main() {
    
    double valor;
    int notas[6], moedas[6];

    scanf("%lf", &valor);

    int centavos = valor * 100;

    notas[0] = centavos / 10000;
    centavos %= 10000;
    notas[1] = centavos / 5000;
    centavos %= 5000;
    notas[2] = centavos / 2000;
    centavos %= 2000;
    notas[3] = centavos / 1000;
    centavos %= 1000;
    notas[4] = centavos / 500;
    centavos %= 500;
    notas[5] = centavos / 200;
    centavos %= 200;

    moedas[0] = centavos / 100;
    centavos %= 100;
    moedas[1] = centavos / 50;
    centavos %= 50;
    moedas[2] = centavos / 25;
    centavos %= 25;
    moedas[3] = centavos / 10;
    centavos %= 10;
    moedas[4] = centavos / 5;
    centavos %= 5;
    moedas[5] = centavos;

    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", notas[0]);
    printf("%d nota(s) de R$ 50.00\n", notas[1]);
    printf("%d nota(s) de R$ 20.00\n", notas[2]);
    printf("%d nota(s) de R$ 10.00\n", notas[3]);
    printf("%d nota(s) de R$ 5.00\n", notas[4]);
    printf("%d nota(s) de R$ 2.00\n", notas[5]);

    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", moedas[0]);
    printf("%d moeda(s) de R$ 0.50\n", moedas[1]);
    printf("%d moeda(s) de R$ 0.25\n", moedas[2]);
    printf("%d moeda(s) de R$ 0.10\n", moedas[3]);
    printf("%d moeda(s) de R$ 0.05\n", moedas[4]);
    printf("%d moeda(s) de R$ 0.01\n", moedas[5]);

    return 0;
}