#include <stdio.h> 
#include <stdlib.h>
#include <locale.h>

main()
{ 
    float n1, n2, n3, m;
    setlocale(LC_ALL,"Portuguese");
    printf("M�dia Aritm�tica\n");
    printf("Digite o primeiro n�mero: ");
    scanf("%f", &n1);
    printf("\nDigite o segundo n�mero: ");
    scanf("%f", &n2);
    printf("\nDigite o terceiro n�mero: ");
    scanf("%f", &n2);
    m=(n1+n2+n3)/3;
    printf("\nA m�dia aritm�tica �: %f.\n ", m);
    system("PAUSE");
}
