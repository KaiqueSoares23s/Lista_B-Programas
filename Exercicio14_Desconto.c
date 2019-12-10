#include <stdio.h> 
#include <stdlib.h>

main()
{ 
    float p, percentual, des;
    printf("Desconto\n");
    printf("Digite o valor do produto: ");
    scanf("%f", &p);
    printf("Digite o desconto: ");
    scanf("%f", &percentual);
    des= p-(p*(percentual/100));
    printf("\nO Valor doProduto com Desconto eh: %f\n ", des);
    system("PAUSE");
}
