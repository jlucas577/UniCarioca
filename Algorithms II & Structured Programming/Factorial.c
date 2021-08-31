#include <stdio.h>

/*
	en_US: Algorithm that aims to calculate the
  factorial of any positive number
*/

/*
	pt_BR: Algoritmo que tem como objetivo calcular o
  fatorial de um número positivo qualquer
*/

int factorial(int num) {
  int i, f = 1;

  printf("\nfatorial(%d) = ", num);

  for (i = num; i >= 1; i--) {
    if (i == 1) {
      printf("%d", i);
    } else {
      printf("%d * ", i);
    }

    f = f * i;
  }

  printf(" = %d", f);
  printf("\n\n");

  return 0;
}

int main() {
  int num;

  printf("Digite um número positivo para ver o seu fatorial: \n");
  scanf("%d", &num);

  if (num >= 0) {
    factorial(num);
  } else {
    printf("Você precisa digitar um número positivo! \n");
  }
}
