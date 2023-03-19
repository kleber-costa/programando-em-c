#include <stdlib.h>

#define PI 3.14159

/* Programa para calcular areas de circulos, usando a instrução while.
Os resultados são armazenados em uma matriz de estruturas.
O número de circulos não é especificado
Uma string é inserida com a descrição de cada circulo. */

void main()
{
    int n, i = 0;

    struct
    {
        char texto[20];
        float raio;
        float area;
    }

    circulo[10];
    
    float processa(float raio);
    printf("Para PARAR, digite FIM para a descrição\n");
    printf("\nDescrição: ");
    scanf("%s", circulo[i].texto);
    while(circulo[i].texto[0] != 'F' ||
          circulo[i].texto[1] != 'I' || 
          circulo[i].texto[2] != 'M')
    {
        printf("Raio: ");
        scanf("%f", &circulo[i].raio);

        if(circulo[i].raio < 0)
        {
            circulo[i].area = 0;
        }
        else
        {
            circulo[i].area = processa(circulo[i].raio);
        }

        ++i;
        printf("\nDescrição: ");
        scanf("%s", circulo[i].texto);
    }

    n = --i;

    printf("\n\nResumo dos resultados\n\n");
    for(i = 0; i <= n; i++)
    {
        printf("%s Raio = %f Area %f\n", circulo[i].texto,  circulo[i].raio,  circulo[i].area);
    }
}

float processa(float r)
{
    float a;
    a = PI * (r * r);
    return(a);
}