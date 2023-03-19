#include <stdio.h>

#define PI 3.14159

/* Programa para calcular a area de um circulo */

main()
{
    float raio, area;
    float processa(float raio); /* função processa que recebe raio como argumento */

    printf("Raio = ? ");
    scanf("%f", &raio);
    area = processa(raio);
    printf("Area = %f", area);
}

float processa(float r) /* função processa que retorna o valor da área */
{
    float a;

    a = PI * r * r;
    return(a);
}