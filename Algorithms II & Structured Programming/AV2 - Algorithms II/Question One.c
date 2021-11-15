#include <stdio.h>

#define vectorSize 10

/*
  Questão: Defina uma estrutura (registro) para representar um ponto no plano cartesiano, com as
    coordenadas x e y representando valores inteiros. Em seguida, defina um vetor de pontos com
    10 posições, faça a leitura de cada ponto e, ao final, exiba todos os pontos que estão acima do
    eixo x.
*/

/*
  Grupo: João Lucas Martins de Sousa, Luciene Alves da Silva,
    Guilherme Luiz De Oliveira Guasselli, Laiza Gonçalves Fernandes Da Silva
*/

typedef struct {
  int x;
  int y;
} Point;

void readVector(Point points[]) {
  int i = 0;
  for (i = 0; i < vectorSize; i++) {
    printf("Qual é o valor do eixo X para o %iº ponto? \n", (i + 1));
    fflush(stdin);
    scanf("%i", &points[i].x);

    printf("\nQual é o valor do eixo Y para o %iº ponto? \n", (i + 1));
    fflush(stdin);
    scanf("%i", &points[i].y);

    printf("\n-----\n\n");
  }
}

void printVector(Point points[]) {
  int i = 0;
  printf("Os seguintes pontos estão acima do eixo X: \n\n");
  for (i = 0; i < vectorSize; i++) {
    if (points[i].x > 0) {
      printf("P(%i, %i), ", points[i].x, points[i].y);
    }
  }
}

int main() {
  Point points[vectorSize];
  readVector(points);
  printVector(points);
  return 0;
}
