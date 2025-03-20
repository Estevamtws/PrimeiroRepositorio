#include <stdio.h>
#include <stdlib.h>
int main () {
    char Joao[10];
    float SalarioFixo, Vendas, TOTAL;
    scanf("%s %f %f", Joao, &SalarioFixo, &Vendas);
    TOTAL = (SalarioFixo + (Vendas * 0.15));
    printf("TOTAL = R$ %.2f\n", TOTAL);
    return 0;
}
    