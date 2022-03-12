#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int SomaDeDivisores(int numero);

int main(){
    setlocale(LC_ALL, "Portuguese");

    int num, resposta;

    printf("Digite o número desejado: ");
    scanf("%d", &num);

    resposta = SomaDeDivisores(num);

    printf("A soma dos divisores do némero %d é: %d\n\n", num, resposta);

    system("pause");
    return 0;
}

int SomaDeDivisores(int numero){
    int div, soma = 0;

    for(div = 1; div <= numero; div++){
        if(numero % div == 0){
            soma = soma + div;
        }
    }
    return soma;
}

