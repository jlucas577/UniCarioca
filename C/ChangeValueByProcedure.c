#include <stdio.h>

/*
	en_US: Simple algorithm that aims to set the value
  for a variable found in the main() method
*/

/*
	pt_BR: Algoritmo simples que tem como objetivo, definir o valor
  para uma variável que se encontra no método main()
*/

// value -> Endereço
// *value -> conteúdo armazenado no endereço
void read(int *value) {
  printf("Digite qualquer valor númerico: \n\n");
  scanf("%d", value);
}

int main() {
  int value;

  read(&value);
  printf("O valor digitado foi: \n\n%d \n\n", value);

  return 0;
}
