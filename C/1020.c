#include <stdio.h>

int main()
{
    int dias, meses, diasRestantes, anos;
    scanf("%d", &dias);
    anos = dias / 365;
    diasRestantes = dias % 365;
    meses = diasRestantes / 30;
    dias = diasRestantes % 30;
    printf("%d ano(s)", anos);
    printf("\n%d mes(es)", meses);
    printf("\n%d dia(s)", dias);
    printf("\n");

    return 0;
}