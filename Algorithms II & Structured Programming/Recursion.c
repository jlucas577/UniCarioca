#include <stdio.h>

/*
	en_US: Algorithm that aims to show usage
  of recursive functions and their functioning
*/

/*
	pt_BR: Algoritmo que tem como objetivo mostrar o uso
  de funções recursivas e seu funcionamento
*/

int factorial(int num){
  if (num == 0) {
    return 1;
  } else {
    return (num * factorial(num - 1));
  }
}

int main() {
  int num, res;

  printf("Digite um número positivo qualquer: \n");
  scanf("%d \n", &num);

  res = factorial(num);

  printf("Resultado: %d \n", res);
}
