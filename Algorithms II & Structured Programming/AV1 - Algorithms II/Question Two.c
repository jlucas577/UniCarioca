#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#define vectorSize 50

/*
  Questão: Considere um sistema para gerenciamento dos automóveis de uma
  loja. Faça um programa em C para ler e manipular as informações de um cadastro de
  automóveis. Defina um vetor de registros de até 50 posições e faça o cadastro enquanto o
  usuário desejar, respeitando o limite de automóveis. Ao final do cadastro, o programa deve
  exibir todos os dados dos automóveis cadastrados. Os campos da estrutura são: código,
  modelo, ano e placa
*/

/*
  Grupo: João Lucas Martins de Sousa, Luciene Alves da Silva,
    Guilherme Luiz De Oliveira Guasselli, Laiza Gonçalves Fernandes Da Silva
*/

typedef struct {
  int code;
  char model[30];
  int year;
  char sign[7];
} Car;

int main() {
  Car cars[vectorSize];
  bool nextCar = true;
  int i = 0;

  for(i = 0; i < vectorSize; i++) {
      cars[i].code = 1;
      strcpy(cars[i].model, "NULL");
      cars[i].year = 2000;
      strcpy(cars[i].sign, "NULL");
  }

  printf("Seja bem vindo ao nosso sistema para gerenciamento de automóveis!\n\n");
  printf("Caso queira parar o cadastro, basta digitar 0 quando o código for solicitado\n");

  printf("\n-----\n\n");

  i = 0;

  do {
    printf("%iº automóvel: \n", (i + 1));

    printf("\nDigite o código: \n");
    scanf("%d%*c", &cars[i].code);

    if (cars[i].code == 0) {
      nextCar = false;
      break;
    }

    printf("\nDigite o modelo: \n");
    fgets(cars[i].model, 50, stdin);

    printf("\nDigite o ano: \n");
    scanf("%d%*c", &cars[i].year);

    printf("\nDigite a placa: \n");
    scanf("%s%*c", &cars[i].sign);

    printf("\n-----\n\n");

    if (i == vectorSize) {
      nextCar = false;
    } else {
      i++;
    }
  } while (nextCar == true && i < vectorSize);

  printf("\n-----\n\n");

  printf("Dados dos automóveis cadastrados: \n\n");

  for (i = 0; i < vectorSize; i++) {
    if (strcmp("NULL", cars[i].model) != 0) {
      printf("%iº automóvel: \n", (i + 1));

      printf("\n Código: %d ", cars[i].code);
      printf("\n Modelo: %s ", cars[i].model);
      printf("Ano: %d ", cars[i].year);
      printf("\n Placa: %s ", cars[i].sign);

      printf("\n\n-----\n\n");
    }
  }

  return 0;
}
