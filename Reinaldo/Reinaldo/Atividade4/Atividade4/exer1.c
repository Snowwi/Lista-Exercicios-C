#include <stdio.h>
#include <stdlib.h>

void exer1()
{
    float vi, a, t, v;

    printf("Digite a velocidade inicial:");
    scanf("%f", &vi);

    printf("Digite a Aceleração:");
    scanf("%f", &a);

    printf("Digite o instante de tempo:");
    scanf("%f", &t);

    v = vi + a * t;

    printf("Velocidade no instante %.2f  = %.2f m/s\n", t, v);


}
