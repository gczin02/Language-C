#include <stdio.h>

int main() {
    int codigo, diarias;
    float valorDiaria, valorTotal;

    printf("Digite o codigo da diaria: ");
    scanf("%d", &codigo);

    printf("Digite a quantidade de diarias: ");
    scanf("%d", &diarias);

    if (codigo == 1) {
        valorDiaria = 300;
        valorTotal = valorDiaria * diarias;
        printf("Valor total da hospedagem: R$ %.2f\n", valorTotal);
    }
    else if (codigo == 2) {
        valorDiaria = 450;
        valorTotal = valorDiaria * diarias;
        printf("Valor total da hospedagem: R$ %.2f\n", valorTotal);
    }
    else if (codigo == 3) {
        valorDiaria = 500;
        valorTotal = valorDiaria * diarias;
        printf("Valor total da hospedagem: R$ %.2f\n", valorTotal);
    }
    else {
        printf("Tipo invalido\n");
    }

    return 0;
}