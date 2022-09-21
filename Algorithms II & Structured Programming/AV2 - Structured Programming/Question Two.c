#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#define vectorSize 100

/*
  Questão: Faça um programa para o cadastro de produtos de uma loja. Seu
    programa deve criar um arquivo binário (produtos.dat) para armazenar os
    seguintes dados dos produtos: código, descrição e preço. Os produtos
    devem ser cadastrados enquanto o código informado for positivo. Após
    encerrar o cadastro de produtos, o programa deve percorrer o arquivo que
    foi criado e apresentar o valor do produto mais caro.
*/

/*
  Grupo: João Lucas Martins de Sousa, Luciene Alves da Silva, Everton de Souza
    Guilherme Luiz De Oliveira Guasselli, Laiza Gonçalves Fernandes Da Silva
*/

typedef struct {
  int code;
  char description[50];
  float price;
} Product;

void welcomeMessage() {
  printf("Seja bem vindo(a) ao nosso sistema para cadastro de produtos!\n\n");
  printf("Caso queira parar o cadastro, basta informar um código negativo.\n");
}

int readFile(Product products[]) {
  FILE * file = fopen("produtos.dat", "rb");
  int i = 0;

  if (file == NULL)	{
    printf("\nErro ao abrir o arquivo binário!\n");
    exit(1);
  }

  while(1) {
    Product product;
    size_t r = fread(&product, sizeof(Product), 1, file);

    if (r < 1) {
      break;
    } else {
      products[i++] = product;
    }
  }

  fclose(file);
  return i;
}

void saveFile(Product products[]) {
  FILE * file = fopen("produtos.dat", "wb");
  int size = sizeof(products) - 1,
    i = 0;

  if (file == NULL)	{
    printf("\nErro ao criar o arquivo binário!\n");
		exit(1);
  }

  for (i = 0; i < size; i++) {
		fwrite(&products[i], sizeof(Product), 1, file);
  }
	fclose(file);

  printf("\nArquivo criado com sucesso! \n\n");
}

void printFile() {
  Product auxProducts[vectorSize];
  int size = readFile(auxProducts),
    i = 0;

	for (i = 0; i < size; i++) {
    printf("Preço: %f\n", auxProducts[i].price);
	}
}

void readVector(Product products[]) {
  bool next = true;
  int i = 0;

  do {
    printf("\n-----\n\n");
    printf("%iº produto: \n", (i + 1));

    printf("\nDigite o código: \n");
    fflush(stdin);
    scanf("%d%*c", &products[i].code);

    if (products[i].code < 0) {
      next = false;
      break;
    }

    printf("\nDigite a descrição: \n");
    fflush(stdin);
    fgets(products[i].description, 50, stdin);

    printf("\nDigite o preço: \n");
    fflush(stdin);
    scanf("%f%*c", &products[i].price);

    if (i == vectorSize) {
      next = false;
    } else {
      i++;
    }
  } while (next == true && i < vectorSize);
}

int main() {
  Product products[vectorSize];

  welcomeMessage();
  readVector(products);
  saveFile(products);
  printFile();

  return 0;
}
