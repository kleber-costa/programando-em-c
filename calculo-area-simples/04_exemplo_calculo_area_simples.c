#include <stdio.h>
#define PI 3.14159

/* Programa para calcular a área de circulos */

main()
{
    float area, raio;
    int count, n;
    float processa(float raio);

    printf("Quantos circulos? ");
    scanf("%d", &n);

    for(count = 0; count < n; ++count)
    {
        printf("\nCirculo nº %d: Raio = ? ", count+1);
        scanf("%f", &raio);
        
        if (raio <= 0)
            area = 0;
        else
            area = processa(raio);

        printf("Area = %f", area);
    }
}

float processa(float r)
{
    float a;
    a = PI * r * r;
    return(a);
}