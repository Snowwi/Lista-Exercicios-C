#include <stdio.h>
#include <stdlib.h>

void main()
{
    float distancia, tempo, velocidade;
    char nomePiloto[20];

    printf("Escreva o nome do piloto:");
    scanf("%s",&nomePiloto);

    printf("Distancia percorrida:");
    scanf("%f",&distancia);

    printf("Tempo:");
    scanf("%f",&tempo);

    velocidade = (distancia/tempo);

    printf("A velocidade media do %s = %.2f", nomePiloto, velocidade);
}

