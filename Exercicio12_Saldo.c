#include <stdio.h> 
#include <stdlib.h>

main()
{ 
    float s, novo;
    printf("Novo Saldo\n");
    printf("Digite o Saldo atual: ");
    scanf("%f", &s);
    novo= s+s*0.02;
    printf("\nO Saldo com reajuste eh: %f\n ", novo);
    system("PAUSE");
}
