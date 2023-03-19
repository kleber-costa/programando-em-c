#include <stdio.h>

#define PI 3.14159

/* Programa para calcular areas de circulos, usando a instrução while.
Os resultados são armazenados em uma matriz.
O número de circulos não é especificado. */

void main()
{
    int n, i = 0;
    float raio[100], area[100];
    float processa(float raio);

    printf("Para parar entre com o valor 0 para raio \n");
    printf("\nRaio = ? ");
    scanf("%f", &raio[i]);

    while (raio[i])
    {
        if (raio[i] < 0)
        {
            area[i] = 0;
        }
        else
        {
            area[i] = processa(raio[i]);
        }
        printf("Raio = ? ");
        scanf("%f", &raio[++i]);
    }
    
    n = --i; /* decrementa o maior valor de i, para que ele seja i-1 e possa ser usado como número de indices de 0 até n-1 */
    
    printf("\nResumo dos resultados\n\n");
    for(i = 0; i <= n; i++)
    {
        printf("Raio = %f Area = %f\n", raio[i], area[i]);
    }
}

float processa(float r)
{
    float a;
    a = PI * (r * r);
    return(a);
}