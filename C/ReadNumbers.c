#include <stdio.h>

/*
	en_US: This simple code's main function is to read an unknown quantity
  of numbers and count how many of them are in the following ranges: [0-30], [31-65] and [66-100].
  Data entry ends when a negative number is read.
*/

/*
	pt_BR: Esse simples código tem como principal função ler uma quantidade desconhecida
  de números e contar quantos deles estão nos seguintes intervalos: [0-30], [31-65] e [66-100].
  A entrada de dados termina quando for lido um número negativo.
*/

int main() {
  int numero = 0,
    intervaloDe0A30 = 0,
    intervaloDe31A65 = 0,
    intervaloDe66A100 = 0;

  do {
    printf("Digite um número qualquer \n");
  	scanf("%d", &numero);

    if (numero >= 0 && numero <= 30) {
      intervaloDe0A30 += 1;
    } else if (numero >= 31 && numero <= 65) {
      intervaloDe31A65 += 1;
    } else if (numero >= 66 && numero <= 100) {
      intervaloDe66A100 += 1;
    }
  } while(numero >= 0);

  printf("%d números estão no intervalo [0-30] \n", intervaloDe0A30);
  printf("%d números estão no intervalo [31-65] \n", intervaloDe31A65);
  printf("%d números estão no intervalo [66-100] \n", intervaloDe66A100);

	return 0;
}
