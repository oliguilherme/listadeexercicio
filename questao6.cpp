#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float PesoIdeal(float alt, char sexo){
    float peso;

    if(sexo == 'M'){
        peso = (72.7 * alt) - 58;
        printf("O peso ideal é: %.2f kg", peso);
    }
    else if(sexo == 'F'){ 
        peso = (62.1 * alt) - 44.7;
        printf("O peso ideal é: %.2f kg", peso);
    }
}

int main(){
    setlocale(LC_ALL, "Portuguese");
    float altura;
    char sexo;

    printf("\t\t\tPROGRAMA PARA CALCULAR SEU PESO IDEAL\n\n");
    printf("Informe sua altura em metros: ");
    scanf("%f", &altura);
     fflush(stdin);

    printf("Informe o seu sexo. M para masculino e F para feminino: ");
    scanf("%c", &sexo);
    fflush(stdin);

     PesoIdeal(altura, sexo);
}
    