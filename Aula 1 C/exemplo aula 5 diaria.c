#include <stdio.h>

int main() {
    char tipo;
    int diarias;
    float valorDiaria, valorTotal;

    printf("Qual o tipo de hospedagem (S-D-T)? ");
    scanf(" %c", &tipo);

    printf("Qual a quantidade de diarias? ");
    scanf("%d", &diarias);

    switch (tipo) {
        case 'S':
        case 's':
            valorDiaria = 300.00;
            break;

        case 'D':
        case 'd':
            valorDiaria = 450.00;
            break;

        case 'T':
        case 't':
            valorDiaria = 500.00;
            break;

        default:
            printf("Tipo invalido!!!\n");
            return 0;
    }

    valorTotal = valorDiaria * diarias;

    printf("Valor total a pagar: R$ %.2f\n", valorTotal);

    return 0;
}