#include <stdio.h>
#include <math.h>

float conversao, hora, minuto;

int main (void){
    printf("Digite o tempo em horas: ");
    scanf("%f", &hora);
    printf("Digite os minutos: ");
    scanf("%f", &minuto);
    conversao = hora * 60 + minuto;
    printf("Se passaram %.0f minutos desde o inicio do dia ", conversao);
    return 0;
}
