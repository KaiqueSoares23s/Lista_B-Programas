#include <stdio.h> 
#include <stdlib.h>
#include <locale.h>

main()
{ 
    float n1, n2, n3, m;
    setlocale(LC_ALL,"Portuguese");
    printf("Média Aritmética\n");
    printf("Digite o primeiro número: ");
    scanf("%f", &n1);
    printf("\nDigite o segundo número: ");
    scanf("%f", &n2);
    printf("\nDigite o terceiro número: ");
    scanf("%f", &n2);
    m=(n1+n2+n3)/3;
    printf("\nA média aritmética é: %f.\n ", m);
    system("PAUSE");
}
