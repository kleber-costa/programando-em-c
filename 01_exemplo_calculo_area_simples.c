#include <stdio.h>

/*Programa para calcular a area de um circulo*/

main()
{
    float raio, area;

    printf("Raio = ?\n");
    scanf("%f", &raio);
    area = 3.14159 * raio * raio;
    printf("Area = %f", area);
}