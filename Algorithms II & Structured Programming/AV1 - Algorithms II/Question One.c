#include <stdio.h>

#define vectorSize 10

/*
  Questão: Faça um programa em C que preencha dois vetores de dez
    elementos inteiros cada um e crie um terceiro vetor formado pela intercalação dos dois
    primeiros vetores. Ao final imprima o terceiro vetor.
*/

/*
  Grupo: João Lucas Martins de Sousa, Luciene Alves da Silva,
    Guilherme Luiz De Oliveira Guasselli, Laiza Gonçalves Fernandes Da Silva
*/

int main() {
  int vector1[vectorSize], vector2[vectorSize],
    vector3[vectorSize * 2], i = 0;

  for (i = 0; i < vectorSize; i++) {
    printf("Primeiro vetor - Digite o %iº valor: \n", (i + 1));
    fflush(stdin);
    scanf("%i", &vector1[i]);

    printf("Segundo vetor - Digite o %iº valor: \n", (i + 1));
    fflush(stdin);
    scanf("%i", &vector2[i]);

    printf("\n-----\n\n");
  }

  for (i = 0; i < vectorSize; i++) {
      vector3[i * 2] = vector1[i];
  }
  for (i = 0; i < vectorSize; i++) {
      vector3[i * 2 + 1] = vector2[i];
  }

  printf("Terceiro vetor: ");
  for (i = 0; i < vectorSize * 2; i++) {
      printf("%i ", vector3[i]);
  }

  printf("\n-----\n\n");

  return 0;
}
