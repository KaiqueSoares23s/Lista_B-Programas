#include <stdio.h> 
#include <stdlib.h>

main()
{ 
    int n1, n2, sub;
    printf("Inteiros e Subtracao\n");
    printf("Digite o primeiro numero: ");
    scanf("%d", &n1);
    printf("\nDigite o segundo numero: ");
    scanf("%d", &n2);
    sub=n1-n2;
    printf("\nA subtracao de %d por %d eh igual a: %d.\n ", n1, n2, sub);
    system("PAUSE");
}
