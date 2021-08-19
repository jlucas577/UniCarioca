#include <stdio.h>
#include <stdbool.h>

/*
	Grupo: João Lucas Martins de Sousa - Matricula: 2021100688, Aline de Sousa Ferreira - Matricula: 2021100924
  Pedro Henrique da Silva Santos - Matricula: 202010
*/

/*
	en_US: This algorithm aims to read people's age while the
  user wishes, and calculate the average age of people who are older
  of age and inform how many are of age and how many are minors.
*/

/*
	pt_BR: Esse algoritmo tem como objetivo ler a idade das pessoas enquanto o
  usuário desejar, e calcular a média de idade das pessoas que sejam maiores
  de idade e informar quantas são maior de idade e quantas são menores.
*/

int calculateAverage(ages, size) {
  int average = ages / size;

  printf("A média de idade das pessoas com idade maior \n ou igual a 18 anos é de: %d anos \n\n", average);
  printf("---------- \n");

  return 0;
}

int main() {
  int peoplesOlder = 0,
    peoplesUnderage = 0,
    populationAge = 0,
    populationSize = 0;
  bool nextPeople = true;

  printf("Seja bem vindo(a) ao leitor de idade da população, para finalizar a leitura \n basta digitar um número negativo a qualquer momento! \n\n");

  do {
    int age = 0;

    printf("Digite a idade da pessoa: \n");
    scanf("%d", &age);
    printf("---------- \n");

    if (age >= 18) {
      peoplesOlder = peoplesOlder + 1;
      populationAge = populationAge + age;
      populationSize = populationSize + 1;
    } else if (age > 0 && age < 18) {
      peoplesUnderage = peoplesUnderage + 1;
    }

    if (age <= 0) {
      nextPeople = false;
    }
  } while(nextPeople == true);

	printf("%d pessoas são maiores de idade. \n", peoplesOlder);
  printf("%d pessoas são menores de idade. \n\n", peoplesUnderage);

  calculateAverage(populationAge, populationSize);

	return 0;
}
