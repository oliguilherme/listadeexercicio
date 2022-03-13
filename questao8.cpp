#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int fatorial(int fat){
    int n;
    int result = 1;

    if(fat == 0){
        return 1;
    } else{
        for(n = fat; n >= 1; n--){
        result = result * n;
    }
    return result;
    }
}

int main(){
    setlocale(LC_ALL, "Portuguese");
    
    int valor, resposta;

    printf("\t\t\tCalculador de fatorial\n\n");
    printf("Informe o número escolhido: ");
    scanf("%d", &valor);

    resposta = fatorial(valor);
    
    printf("O fatorial de %d! é: %d\n\n", valor, resposta);

    system("pause");
    return 0;
}
