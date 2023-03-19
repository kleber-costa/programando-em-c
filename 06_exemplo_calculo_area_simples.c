#include <stdio.h>

#define PI 3.14159

/* Programa para calcular areas de circulos, usando a instrução while.
O número de círculos não é especificado */

void main()
{
    float raio, area;
    float processa(float raio);

    printf("Para PARAR, entre com o valor 0 para o raio \n");
    printf("\nRaio = ? ");
    scanf("%f", &raio);

    while (raio)
    {
        if (raio < 0)
        {
            area = 0;
        }
        else
        {
            area = processa(raio);
        }
        printf("Area = %f\n", area);
        printf("\nRaio = ? ");
        scanf("%f", &raio);
    }
}

float processa(float r)
{
    float a;

    a = PI * (r * r);
    return(a);
}