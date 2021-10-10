#include <stdio.h>

/*
  Questão: Crie uma função que leia uma string (de até 80 caracteres) utilizando um vetor de caracteres e
  um caractere. A função deve trocar todas as ocorrências desse caractere na string por um
  espaço em branco. Faça um programa que leia uma string e um caractere. Em seguida, o
  programa deve chamar a função criada passando os dados e imprimindo em seguida a string
  modificada
*/

/*
  Grupo: João Lucas Martins de Sousa, Luciene Alves da Silva,
    Guilherme Luiz De Oliveira Guasselli, Laiza Gonçalves Fernandes Da Silva
*/

void replace(char * str, char oldChar);

void replace(char * str, char oldChar) {
  int i = 0;
  while(str[i] != '\0') {
    if (str[i] == oldChar) {
      str[i] = ' ';
    }
    i++;
  }
}

int main() {
  char text[80], oldChar;

  printf("Digite um texto qualquer: \n");
  fflush(stdin);
  fgets(text, 80, stdin);

  printf("\nQual caractere deseja remover? \n");
  fflush(stdin);
  scanf("%s%*c", &oldChar);

  replace(text, oldChar);

  printf("\nTexto formatado: \n%s", text);

  return 0;
}
