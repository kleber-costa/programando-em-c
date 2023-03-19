#include <stdio.h>
#define PI 3.14159

/* Programa para calcular a área de um circulo com checagem de erro */

main()
{
    float raio, area;
    float processa(float raio);

    printf("Raio = ? ");
    scanf("%f", &raio);

    if(raio < 0)
        area = 0;
    else
        area = processa(raio);
    
    printf("Area = %f", area);
       
}

float processa(float r)
{
    float a;
    
    a = PI * r * r;
    return(a);
}