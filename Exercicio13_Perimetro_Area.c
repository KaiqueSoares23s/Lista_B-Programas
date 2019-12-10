#include <stdio.h> 
#include <stdlib.h>

main()
{ 
    float b, h, p, area;
    printf("Perimetro e area\n");
    printf("Digite a base: ");
    scanf("%f", &b);
    printf("Digite a altura: ");
    scanf("%f", &h);
    p= b+h;
    area= b*h;
    printf("\nO Perimetro eh: %f\n ", p);
    printf("\nA Area eh: %f\n ", area);
    system("PAUSE");
}
