#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()
{ 

    float n1, n2, SO, SU, MU, DI;
    setlocale(LC_ALL, "Portuguese");
    printf("Programa das 4 Opera��es\n");
    printf("Digite o Primeiro N�mero: \n");
    scanf("%f", &n1);
    printf("Digite o Segundo N�mero: \n");
    scanf("%f", &n2);
	system("pause");
    system("cls");
    SO= n1+n2;
    printf("A Soma de %f e %f �: %.2f.\n", n1, n2, SO);
    SU= n1-n2;
    printf("A Subtra��o de %f e %f �: %.2f.\n", n1, n2, SU);
    MU= n1*n2;
    printf("A Multiplica��o de %f e %f �: %.2f.\n", n1, n2, MU);
    DI= n1/n2;
    printf("A Divis�o de %f e %f �: %.2f.\n", n1, n2, DI);
    system("PAUSE");
}
