#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

float CalcularVolume(float raio){
    float volume;

    volume = 4.0/3.0 * pow(raio, 3);

    return volume;
}
int main(){
    setlocale(LC_ALL, "Portuguese");
    
    float x, resposta;

    printf("Digite o raio da esfera: ");
    scanf("%f", &x);

    resposta = CalcularVolume(x);

    printf("O volume da esfera de raio %.2f é: %.2f\n", x, resposta);

   system("Pause");   
    return 0;
}