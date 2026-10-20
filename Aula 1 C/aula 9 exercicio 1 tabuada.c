#include <stdio.h>

int main(void){
    int numero, i;
    FILE *arquivo;
    
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);
    
    arquivo = fopen("taboada.txt", "w");
    if (arquivo == NULL ){
        printf("Nao tem nada");
        return 1;
    }
    
    for (i=0; i<=10;i++){
        fprintf(arquivo, "%d * %d = %d \n",
        numero, i, numero*i);
    }
    
    fclose(arquivo);
    
    printf("tabuada feita com sucesso");
    return 0;
}