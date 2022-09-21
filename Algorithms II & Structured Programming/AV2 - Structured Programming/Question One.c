#include <stdio.h>
#include <stdlib.h>

/*
  Questão: Faça um programa que leia números inteiros em um vetor e, ao final,
    exiba o menor valor lido e a média de todos os números lidos. O programa deve
    perguntar ao usuário quantos valores serão informados e utilizar a alocação
    dinâmica para criar o vetor.
*/

/*
  Grupo: João Lucas Martins de Sousa, Luciene Alves da Silva, Everton de Souza
    Guilherme Luiz De Oliveira Guasselli, Laiza Gonçalves Fernandes Da Silva
*/

void getSmallValue(int vector[], int sizeOfVector) {
  int small = vector[0],
    i = 0;
  for (i = 0; i < sizeOfVector; i++) {
    if (vector[i] < small) {
      small = vector[i];
    }
  }
  printf("O menor valor lido é: %d \n", small);
}

int main() {
  int *vector,
    i = 0,
    sizeOfVector = 0,
    totalValuesReported = 0;

  printf("Quantos valores serão informados? \n");
  scanf("%d", &sizeOfVector);
  printf("\n-----\n\n");

  vector = (int *) malloc(sizeOfVector * sizeof(int));

  for (i = 0; i < sizeOfVector; i++) {
    printf("Qual é o valor para a %iº posição do vetor? \n", (i + 1));
    fflush(stdin);
    scanf("%i", &vector[i]);

    totalValuesReported = totalValuesReported + vector[i];

    printf("\n-----\n\n");
  }

  getSmallValue(vector, sizeOfVector);

  printf("A média dos valores informados é: %d \n", (totalValuesReported / sizeOfVector));

  free(vector);

  return 0;
}
