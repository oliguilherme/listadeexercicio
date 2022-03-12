#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int mdc(int a, int b){
    int menor, resposta = 1;
        
      if(a < b){
          menor = a;
    } else {
        menor = b;
    }

    for (int d  = 1;  d <= menor; d++){
        if(a % d == 0 and b % d == 0){
            resposta = d;
        }
    }
    return resposta;
}
int main(){
    setlocale(LC_ALL, "Portuguese");

    int num1, num2, resultado;

    printf("Digite o primeiro número: ");
    scanf("%d", &num1);

    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    resultado = mdc(num1, num2);

    printf("o mdc é: %d ", resultado);

    return 0;

    
}