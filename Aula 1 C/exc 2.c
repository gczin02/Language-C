#include <stdio.h>

int main() {
    int produtos_manha;
    int produtos_noite;
    int total;

    printf("Quantos produtos recebidos de manha? ");
    scanf("%d", &produtos_manha);

    printf("Quantos produtos recebidos de noite? ");
    scanf("%d", &produtos_noite);

    total = produtos_manha + produtos_noite;

    printf("Total de produtos recebidos: %d\n", total);

    return 0;
}
