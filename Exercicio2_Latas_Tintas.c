#include <stdio.h> 
#include <stdlib.h>
#include <math.h>
#include <locale.h>

main()
{ 

    float h, r, areaCil, l, latas, custo;
    setlocale(LC_ALL, "Portuguese");
    printf("Tintas\n");
    printf("Digite o valor da altura: ");
    scanf("%f", &h);
    printf("Digite o valor do raio: ");
    scanf("%f", &r);
    areaCil=3.14*r*r+2*3.14*r*h;
    printf("\nA �rea do cilindro � %.2f metros quadrados", areaCil);
    l=areaCil/3;
    printf("\nA quantidade de litros necess�ria � de %.2f", l);
    latas=l/5;
    printf("\nA quantidade de latas necess�ria � de %.2f", latas);
    custo=latas*20;
    printf("\nO valor total das tintas � de R$ %.2f\n", custo);
    system("pause");
}
