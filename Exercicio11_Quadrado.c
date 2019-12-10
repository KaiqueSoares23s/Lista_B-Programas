#include <stdio.h> 
#include <stdlib.h>

main()
{ 
    float n, r;
    printf("Quadrado\n");
    printf("Digite o numero: ");
    scanf("%f", &n);
    r=n*n;
    printf("\nO quadrado do numero %.f e: %.f\n ", n, r);
    system("PAUSE");
}
