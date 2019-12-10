#include <stdio.h> 
#include <stdlib.h>
#include <math.h>
#include <locale.h>

main()
{ 

    int num;
    setlocale(LC_ALL, "Portuguese");
    printf("Par ou Ímpar, Negativo ou Positivo");
    printf("Digite o número: ");
    scanf("%d", &num);
    
    if(num/2==0){
    	printf("\nO número é par.");
 }
	if(num!=num/2==0){
		printf("\nO número é ímpar.");
	}
	if(num>=0){
		printf("O número é positivo.");
	}
	if(num!=num>=0){
		printf("O número é positivo.");
	}
    system("pause");
}
