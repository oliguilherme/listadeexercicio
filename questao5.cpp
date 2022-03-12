#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void condicao(int numero){
    if(numero >= 0){
        printf("O número %d é positivo", numero);
    } else{
        printf("O número %d em questão não é positivo", numero);
    }
}

int main(){
    setlocale(LC_ALL, "Portuguese");
    int num;

    printf("Digite um número: ");
    scanf("%d", &num);

    condicao(num);
    
    return 0;
}