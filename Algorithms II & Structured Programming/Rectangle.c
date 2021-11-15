#include <stdio.h>

/*
  en_US: Algorithm that aims to read the sides of a rectangle and
  implement a function that receives these sides, calculate and return the area and
  the perimeter of this rectangle using a single function and local variables
  and the passage by reference.
*/

/*
	pt_BR: Algoritmo que tem como objetivo, ler os lados de um retângulo e
  implementar uma função que receba esses lados, calcule e retorne a área e
  o perímetro desse retângulo utilizando uma única função e variáveis locais
  e a passagem por referência.
*/

void defineRectangle(int base, int height) {
  int area, perimeter;
  area = base * height;
  perimeter = 2 * (base + height);
  printf("\n------", area);
  printf("\n\nÁrea do retângulo: %d", area);
  printf("\nPerímetro do retângulo: %d \n\n", perimeter);
}

int main() {
  int base, height;

  printf("Qual é a base do retângulo? \n");
  fflush(stdin);
  scanf("%d", &base);

  printf("\nQual é a altura do retângulo? \n");
  fflush(stdin);
  scanf("%d", &height);

  defineRectangle(base, height);

  return 0;
}
