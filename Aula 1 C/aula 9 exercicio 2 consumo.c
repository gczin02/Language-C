#include <stdio.h>

int main() {
    FILE *arquivo;
    int quantidade, dia, i;
    float consumo;

    printf("Quantos registros deseja cadastrar? ");
    scanf("%d", &quantidade);

    arquivo = fopen("consumo.txt", "a");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return 1;
    }

    for (i = 1; i <= quantidade; i++) {
        printf("\nRegistro %d\n", i);

        printf("Digite o dia do mes: ");
        scanf("%d", &dia);

        printf("Digite o consumo de agua em litros: ");
        scanf("%f", &consumo);

        fprintf(arquivo, "Dia: %d - Consumo: %.2f litros\n",
                dia, consumo);
    }

    fclose(arquivo);

    printf("\nRegistros salvos com sucesso!\n");

    return 0;
}
