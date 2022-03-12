#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float ValorDaSeq(int num);

int main(){
    setlocale(LC_ALL, "Portuguese");
    int numero;
    float resposta;
    printf("Digite o número: ");
    scanf("%d", &numero);

    resposta = ValorDaSeq(numero);

    printf("O resultado da soma da sequência é: %.2f\n\n", resposta);

    system("pause"); 
    return 0;
}
    
    
float ValorDaSeq(int num){
    int n;
    float result = 0.0;
    for(n = 1; n <= num; n++){
        printf("1/%d +\n", n);
        result = result + 1.0/n;
    }
    return result;
}