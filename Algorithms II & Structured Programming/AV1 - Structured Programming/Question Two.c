#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#define vectorSize 50

/*
  Questão: Considere um sistema para gerenciamento dos livros de uma livraria. Faça um programa em C
  para ler e manipular as informações de um cadastro de livros. Defina um vetor de registros de
  até 50 posições e faça o cadastro enquanto o usuário desejar, respeitando o limite. Ao final do
  cadastro, o programa deve exibir todos os dados dos livros cadastrados. Os campos da
  estrutura são: isbn, título, autor, ano e número de páginas.
*/

/*
  Grupo: João Lucas Martins de Sousa, Luciene Alves da Silva,
    Guilherme Luiz De Oliveira Guasselli, Laiza Gonçalves Fernandes Da Silva
*/

typedef struct {
  char isbn[20];
  char title[100];
  char author[100];
  int pages;
} Book;

int main() {
  Book books[vectorSize];
  bool nextBook = true;
  int i = 0;

  for (i = 0; i < vectorSize; i++) {
    strcpy(books[i].isbn, "NULL");
    strcpy(books[i].title, "NULL");
    strcpy(books[i].author, "NULL");
    books[i].pages = 0;
  }

  i = 0;

  printf("Seja bem-vindo(a) ao nosso sistema de gerenciamento de livros! \n");
  printf("Caso queira parar o cadastro, basta informar 0 quando o código ISBN for solicitadi.");

  do {
    printf("\n-----\n\n");
    printf("%iº livro:", (i + 1));

    printf("\n\nCódigo ISBN: ");
    scanf("%s%*c", &books[i].isbn);

    if (!strcmp("0", books[i].isbn)) {
      nextBook = false;
      break;
    }

    printf("\nTítulo: ");
    fgets(&books[i].title, 100, stdin);

    printf("\nAutor: ");
    fgets(&books[i].author, 100, stdin);

    printf("\nNúmero de páginas: ");
    scanf("%i%*c", &books[i].pages);

    if (i < vectorSize) {
      nextBook = true;
    } else {
      nextBook = false;
    }

    i++;
  } while (nextBook == true && i < vectorSize);

  printf("\n-----");
  printf("\n\nLivros cadastrados:");

  for (i = 0; i < vectorSize; i++) {
    if (strcmp("NULL", books[i].author) != 0) {
      printf("\n\n%iº livro:", (i + 1));
      printf("\nCódigo ISBN: %s", books[i].isbn);
      printf("\nTítulo: %s", books[i].title);
      printf("Autor: %s", books[i].author);
      printf("Número de páginas: %i", books[i].pages);
    }
  }

  return 0;
}
