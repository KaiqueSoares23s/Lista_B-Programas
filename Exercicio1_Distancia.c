#include <stdio.h> 
#include <stdlib.h>
#include <math.h>
#include <locale.h>

main()
{ 

    float x1, x2, y1, y2, dis;
    setlocale(LC_ALL, "Portuguese");
    printf("Distância\n");
    printf("Digite o valor de X1: ");
    scanf("%f", &x1);
    printf("Digite o valor de X2: ");
    scanf("%f", &x2);
    printf("Digite o valor de Y1: ");
    scanf("%f", &y1);
    printf("Digite o valor de Y2: ");
    scanf("%f", &y2);
    dis=sqrt(pow((x2-x1),2)+pow((y2-y1),2));
    printf("A distância entre os pontos P1 e P2 é %.2f\n", dis);
    system("PAUSE");
}
