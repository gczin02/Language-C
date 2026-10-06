#include <stdio.h>

int main() {

    float salario[4];
    int i;

    
    for (i = 0; i < 4; i++) {
        printf("Digite o salario do %d funcionario: ", i + 1);
        scanf("%f", &salario[i]);
    }

    
    printf("\n--- SALARIOS ---\n");

    for (i = 0; i < 4; i++) {
        printf("Funcionario %d: R$ %.2f\n", i + 1, salario[i]);
    }

    return 0;
}