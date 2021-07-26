#include <stdio.h>
#include <stdbool.h>

/*
  Grupo: João Lucas Martins de Sousa - Matricula: 2021100688, Aline de Sousa Ferreira - Matricula: 2021100924
  Pedro Henrique da Silva Santos - Matricula: 202010
*/

/*
	en_US: This algorithm aims to read 10 whole numbers and
  at the end of the run inform the user how many are positive and negative
*/

/*
	pt_BR: Esse algoritmo tem como objetivo ler 10 números inteiros e
  ao final da execução informar ao usuário quantos são positivos e negativos
*/

bool checkNumber(int number) {
  if (number >= 0) {
    return true;
  } else {
    return false;
  }
}

int main() {
  int numberPositive = 0,
    numberNegative = 0,
    numberIndex = 0;

  do {
    int number = 0;
    bool numberState = false;

    printf("Digite um número qualquer: \n");
    scanf("%d", &number);
    printf("---------- \n");

    numberState = checkNumber(number);

    if (numberState) {
      numberPositive = numberPositive + 1;
    } else {
      numberNegative = numberNegative + 1;
    }

    numberIndex = numberIndex + 1;
  } while(numberIndex < 10);

	printf("%d números positivos foram informados. \n", numberPositive);
  printf("%d números negativos foram informados. \n", numberNegative);

	return 0;
}
