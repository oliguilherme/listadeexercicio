#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void condicao(int numero){
    if(numero >= 0){
        printf("O n�mero %d � positivo", numero);
    } else{
        printf("O n�mero %d em quest�o n�o � positivo", numero);
    }
}

int main(){
    setlocale(LC_ALL, "Portuguese");
    int num;

    printf("Digite um n�mero: ");
    scanf("%d", &num);

    condicao(num);
    
    return 0;
}