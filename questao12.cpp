#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float pot(float base, int expoente){
    if(expoente == 0){
        return 1;
    }
    else{
        return base * pot(base, expoente - 1);
    }
}

int main(){
    setlocale(LC_ALL, "Portuguese");
    
    float base, resultado;
    int exp;

    printf("Digite o valor da base: ");
    scanf("%f", &base);

    printf("Digite o valor do expoente: ");
    scanf("%d", &exp);

    resultado = pot(base, exp);
    printf("O resultado é: %.1f", resultado);

    
}