#include <stdio.h>

#define vectorSize 10

void readVector(int vector[]) {
  int i = 0;
  for (i = 0; i < vectorSize; i++) {
    printf("\n\nInforme um valor para a %dº posição: \n", (i + 1));
    fflush(stdin);
    scanf("%d", &vector[i]);
  }
}

void orderVector(int vector[]) {
  int index1 = 0, index2 = 0, aux = 0;
  for (index1 = 0; index1 < (vectorSize - 1); index1++) {
    for (index2 = (index1 + 1); index2 < vectorSize; index2++) {
      if (vector[index1] > vector[index2]) {
        aux = vector[index1];
        vector[index1] = vector[index2];
        vector[index2] = aux;
      }
    }
  }
}

void printVector(int vector[]) {
  int i = 0;
  for (i = 0; i < vectorSize; i++) {
    printf("pos: %d val: %d - ", i, vector[i]);
  }
}

int binarySearch(int vector[], int search) {
  int start = 0, final = vectorSize - 1, middle = 0;
  do {
    middle = (start + final) / 2;
    if (search == vector[middle]) {
      return middle;
    } else if (search < vector[middle]) {
      final = middle - 1;
    } else {
      start = middle + 1;
    }
  } while (start <= final);
  return -1;
}

int main() {
  int vector[vectorSize], position, search;

  printf("Seja bem-vindo(a) ao nosso algoritmo de busca binária! \n");
  readVector(vector);
  orderVector(vector);

  printf("\n\nInforme um valor para pesquisar no vetor: \n");
  fflush(stdin);
  scanf("%d", &search);

  printf("\n\n");
  printVector(vector);
  printf("\n\n");

  position = binarySearch(vector, search);
  if (position != -1) {
    printf("O valor %d foi encontrado na posição %d do vetor. \n\n", search, position);
  } else {
    printf("Nenhum valor encontrado para %d no vetor. \n\n", search);
  }

  return 0;
}
