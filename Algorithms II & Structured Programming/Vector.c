#include <stdio.h>
#define max 20

/*
	en_US: Algorithm that reads a vector of 20 wages and calculates
  and display the average of all salaries.
*/

/*
	pt_BR: Algoritmo que lê um vetor de 20 salários e calcula
  e exiba a média de todos os salários.
*/

int main() {
  int i, salary[max], salaryTotal;

  for (i = 0; i < max; i++) {
    printf("Informe o salário da posição %d: \n", (i + 1));
    scanf("%d", &salary[i]);
    printf("\n");
  }

  for (i = 0; i < max; i++) {
    salaryTotal = salaryTotal + salary[i];
  }

  printf("A média de todos os salários informados é de: R$ %d \n", (salaryTotal / max));
}
