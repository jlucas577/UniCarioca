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

void printVector(int vector[]) {
  int i = 0;
  for (i = 0; i < vectorSize; i++) {
    printf("pos: %d val: %d - ", i, vector[i]);
  }
}

int sequencialSearch(int vector[], int search) {
  int i = 0;
  for (i = 0; i < vectorSize; i++) {
    if (vector[i] == search) {
      return i;
    }
  }
  return -1;
}

int main() {
  int vector[vectorSize], position, search;

  printf("Seja bem-vindo(a) ao nosso algoritmo de busca sequencial! \n");
  readVector(vector);

  printf("\n\nInforme um valor para pesquisar no vetor: \n");
  fflush(stdin);
  scanf("%d", &search);

  printf("\n\n");
  printVector(vector);
  printf("\n\n");

  position = sequencialSearch(vector, search);
  if (position != -1) {
    printf("O valor %d foi encontrado na posição %d do vetor. \n\n", search, position);
  } else {
    printf("Nenhum valor encontrado para %d no vetor. \n\n", search);
  }

  return 0;
}
