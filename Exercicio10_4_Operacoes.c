#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()
{ 

    float n1, n2, SO, SU, MU, DI;
    setlocale(LC_ALL, "Portuguese");
    printf("Programa das 4 Operações\n");
    printf("Digite o Primeiro Número: \n");
    scanf("%f", &n1);
    printf("Digite o Segundo Número: \n");
    scanf("%f", &n2);
	system("pause");
    system("cls");
    SO= n1+n2;
    printf("A Soma de %f e %f é: %.2f.\n", n1, n2, SO);
    SU= n1-n2;
    printf("A Subtração de %f e %f é: %.2f.\n", n1, n2, SU);
    MU= n1*n2;
    printf("A Multiplicação de %f e %f é: %.2f.\n", n1, n2, MU);
    DI= n1/n2;
    printf("A Divisão de %f e %f é: %.2f.\n", n1, n2, DI);
    system("PAUSE");
}
