#include <stdio.h> 
#include <stdlib.h>
#include <locale.h>

void main()
{ 
    char* nome[100], tel[100], end[100];
    setlocale(LC_ALL, "Portuguese");
    printf("Dados pessoais\n");
    printf("Digite o seu nome: ");
    scanf("%s", &nome);
    printf("\nDigite o seu telefone: ");
    scanf("%s", &tel);
    printf("\nDigite o seu endereço: ");
    scanf("%s", &end);
    printf("\nDADOS\n ");
    printf("NOME: %s\n TELEFONE: %s\n ENDEREÇO: %s\n", nome, tel, end);
    system("PAUSE");
}
