#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float MediaAritmetica(float numeros);

int main(){
    setlocale(LC_ALL, "Portuguese");

   float valor, resposta;

    printf("Informe um valor: ");
    scanf("%f", &valor );

    resposta = MediaAritmetica(valor);

    printf("\nA media aritmética dos valores dados é: %.2f\n\n ", resposta);

    system("pause");
    return 0;
}

float MediaAritmetica(float numeros){
    int total = 0;
    float media, soma = 0.0;

    while(numeros >= 0){
        soma = soma + numeros;
        total++;
        printf("Informe mais um valor (digite um número negativo para finalizar): ");
        scanf("%f", &numeros);
    }
    media = soma / total;

    return media;
}



