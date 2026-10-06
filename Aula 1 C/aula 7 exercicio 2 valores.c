#include <stdio.h>

int main() {
    float valores[8];
    float soma = 0;
    float media;
    int acima = 0;

    
    for (int i = 0; i < 8; i++) {
        printf("Digite o %dº valor: ", i + 1);
        scanf("%f", &valores[i]);

        soma += valores[i];
    }

    
    media = soma / 8;

    
    for (int i = 0; i < 8; i++) {
        if (valores[i] > media) {
            acima++;
        }
    }

    
    printf("\nMedia: %.2f\n", media);
    printf("Valores acima da media: %d\n", acima);

    return 0;
}