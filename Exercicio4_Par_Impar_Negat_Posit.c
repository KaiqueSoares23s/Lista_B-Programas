#include <stdio.h> 
#include <stdlib.h>
#include <math.h>
#include <locale.h>

main()
{ 

    int num;
    setlocale(LC_ALL, "Portuguese");
    printf("Par ou �mpar, Negativo ou Positivo");
    printf("Digite o n�mero: ");
    scanf("%d", &num);
    
    if(num/2==0){
    	printf("\nO n�mero � par.");
 }
	if(num!=num/2==0){
		printf("\nO n�mero � �mpar.");
	}
	if(num>=0){
		printf("O n�mero � positivo.");
	}
	if(num!=num>=0){
		printf("O n�mero � positivo.");
	}
    system("pause");
}
