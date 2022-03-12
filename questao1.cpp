#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int soma(int num){
    int n;
    int result = 0;

    for(n = num; n >= 1; n--){
        result = result + n;
    }
    return result;
}

int main(){
    setlocale(LC_ALL, "Portuguese");
    int valor, resposta;

    printf("\t\t\tPrograma para calcular a soma dos números existentes entre o número e 1\n\n");
    printf("Digite o número desejado: ");
    scanf("%d", &valor);

    resposta = soma(valor);

    printf("A soma dos numeros é: %d ", resposta);

    return 0;


}