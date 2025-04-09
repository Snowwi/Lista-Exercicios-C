#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "exer1.h"

int main()
{
    char opcao;
    do{
      system("cls");
      printf("Escolha o exercicio da lista 1:\n");
      printf("1. Exercicio 1\n");
      printf("2. Exercicio 2\n");
      printf("3. Exercicio 3\n");
      printf("Pressione ESC para sair.\n");

      opcao=getch();
      system("cls");

      switch(opcao) {
            case '1':
                     exer1();
                     break;
            case '2':
                 //    exer2();
                     break;
            default: printf("Opção invalida!");
      }
    } while (opcao != 27);
}
