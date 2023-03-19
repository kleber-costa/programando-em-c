#include <stdio.h>
#define PI 3.14159

main()
{
    float area, raio;
    int cont;
    float processa(float raio);

    printf("Para parar, entre com o valor 0 para raio \n");
    printf("Raio = ? ");
    scanf("%f", &raio);

    for (cont = 1; raio != 0; ++cont)
    {
        if (raio < 0)
            area = 0;
        else
            area = processa(raio);
        
        printf("Area = %f\n", area);
        printf("\nRaio = ? ");
        scanf("%f", &raio);
    }
}

float processa(float r)
{
    float a;
    a = PI * r * r;
    return(a); 
}