#include <stdio.h>
#include <stdlib.h>

void main()
{
    float tempf, tempc;

    printf("Digite um tempo em Farenheit:");
    scanf("%f", &tempf);

    tempc = 5.0/9*(tempf-32);

    printf("Esse temperatura em Farenheit em celcius e de: %.2f\n1", tempc);
}
