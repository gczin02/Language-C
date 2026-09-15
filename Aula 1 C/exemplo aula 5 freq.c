#include <stdio.h>


int main() {
    float percentual, media, nota1, nota2;

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    printf("Qual o percentual de frequencia? ");
    scanf("%f", &percentual);

    media = (nota1 + nota2) / 2;

    printf("\nMedia: %.2f\n", media);
    printf("Frequencia: %.2f%%\n", percentual);

    if (percentual >= 75 && media >= 6) {
        printf("Situacao: APROVADO\n");
    } else {
        printf("Situacao: REPROVADO\n");
    }

    return 0;
}

   
