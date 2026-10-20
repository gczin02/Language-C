#include <stdio.h>

int main(void){
    FILE *arquivo
    char linha[100]
    
    arquivo = fopen("tabuada.txt", "r");
    
    if(arquivo == NULL)
    {
        printf("Nao foi possivel");
        return 1;
    }
    
    printf("conteudo do arquivo");
    while(fgets(linha, sizeof(linha), arquivo) != NULL){
        printf("%s", linha);
    }
    
    return 0;
}