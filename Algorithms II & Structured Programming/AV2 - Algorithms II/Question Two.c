#include <stdio.h>

#define vectorSize 2

/*
  Questão: Faça um programa em C que permita ao usuário preencher um vetor
    com 10 valores inteiros e ordene os dados desse vetor perguntando ao usuário qual dos
    métodos ele deseja aplicar. Ofereça como opção dois dos métodos de ordenação vistos em aula.
    Ao final, o programa deve exibir o vetor ordenado.
*/

/*
  Grupo: João Lucas Martins de Sousa, Luciene Alves da Silva,
    Guilherme Luiz De Oliveira Guasselli, Laiza Gonçalves Fernandes Da Silva
*/

void readVector(int vector[]) {
  int i = 0;
  for (i = 0; i < vectorSize; i++) {
    printf("Qual é o valor inteiro para a %iº posição do vetor? \n", (i + 1));
    fflush(stdin);
    scanf("%i", &vector[i]);

    printf("\n-----\n\n");
  }
}

void quickSort(int vector[], int left, int right) {
  int i = left,
    j = right,
    x = vector[(left + right) / 2],
    y = 0;

  while(i <= j) {
   while(vector[i] < x && i < right) {
    i++;
   }
   while(vector[j] > x && j > left) {
    j--;
   }
   if(i <= j) {
    y = vector[i];
    vector[i] = vector[j];
    vector[j] = y;
    i++;
    j--;
   }
  }

  if(j > left) {
   quickSort(vector, left, j);
  }
  if(i < right) {
   quickSort(vector, i, right);
  }
}

void selectionSort(int vector[]) {
  int i = 0,
   j = 0,
   min = 0,
   aux = 0;

  for (i = 0; i < (vectorSize - 1); i++) {
    min = i;
    for (j = i + 1; j < vectorSize; j++) {
      if (vector[j] < vector[min]) {
        min = j;
      }
    }
    if (i != min) {
      aux = vector[i];
      vector[i] = vector[min];
      vector[min] = aux;
    }
  }
}

void askOrdination(int vector[]) {
  int option = 0;

  printf("Deseja ordenar o vetor utilizando qual método? \n\n");
  printf("[1] Quick Sort \n");
  printf("[2] Selection Sort \n\n");
  printf("Informe apenas o número da opção \n");
  scanf("%i", &option);

  if (option != 1 && option != 2) {
    printf("\n Você digitou uma opção inválida! \n\n");
    askOrdination(vector);
  }

  if (option == 1) {
    quickSort(vector, 0, vectorSize - 1);
  } else if (option == 2) {
    selectionSort(vector);
  }
}

void printVector(int vector[]) {
  int i = 0;
  printf("\n\nVetor reordenado: \n\n");
  for (i = 0; i < vectorSize; i++) {
    printf("%i, ", vector[i]);
  }
  printf("\n\n-----\n\n");
}

int main() {
  int vector[vectorSize];
  readVector(vector);
  askOrdination(vector);
  printVector(vector);
  return 0;
}
