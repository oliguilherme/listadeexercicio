#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int HorasEmSeg(int horas ){
    int segundos;

    segundos = horas * 3600;

    return segundos;
}
int MinutosEmSeg(int minutos){
    int segundos;

    segundos = minutos * 60;

    return segundos;
}

int main(){
    setlocale(LC_ALL, "Portuguese");
    int h, m, s, resp;

    printf("Digite o primeiro n�mero inteiro ");
    scanf("%d", &h);

    printf("Digite o segundo n�mero inteiro: ");
    scanf("%d", &m);

    printf("Digite o terceiro n�mero inteiro: ");
    scanf("%d", &s);

    resp = HorasEmSeg(h) + MinutosEmSeg(m) + s;
    printf("A hora  %dh, %dmin e %dsegundos corresponde a %d segundos.", h, m, s, resp );


}