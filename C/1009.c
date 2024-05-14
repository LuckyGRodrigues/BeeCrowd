#include <stdio.h>

int main()
{
    char nome[10];
    double salarioFixo, comissao, vendas, liquido;
    
    scanf("%s", nome);
    scanf("%lf", &salarioFixo);
    scanf("%lf", &vendas);
    
    comissao = (vendas * 15) / 100;
    liquido = salarioFixo + comissao;
    
    printf("TOTAL = R$ %.2lf\n", liquido);

    return 0;
}