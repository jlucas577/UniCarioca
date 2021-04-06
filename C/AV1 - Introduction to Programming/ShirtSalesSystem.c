#include <stdio.h>

/*
  en_US: This algorithm refers to a scenario where a t-shirt factory produces the sizes
  small, medium and large, each sold respectively for 10, 12 and 15 reais.

  Our program aims to allow the user to provide the amount of shirts
  small, medium and large for a given sale and the system informs you how much
  will be the total purchase amount.
*/

/*
	pt_BR: Esse algoritmo se refere a um cenário onde uma fábrica de camisetas produz os tamanhos
  pequeno, médio e grande, sendo cada um vendido respectivamente por 10, 12 e 15 reais.

  Nosso programa tem como objetivo permitir que o usuário forneça a quantidade de camisetas
  pequenas, médias e grandes referentes a uma determinada venda e o sistema informe quanto
  será o valor total da compra.
*/

int main() {
  int quantidadeCamisetaPequena = 0,
    quantidadeCamisetaMedia = 0,
    quantidadeCamisetaGrande = 0,
    precoTamanhoPequeno = 10,
    precoTamanhoMedio = 12,
    precoTamanhoGrande = 15,
    valorTotal = 0;

	printf("Seja bem vindo(a), ao seu PDV! Vamos calcular o total da compra com base nos produtos escolhidos \n");

  printf("Qual a quantidade de camisetas pequenas? \n");
  scanf("%d", &quantidadeCamisetaPequena);

  printf("Qual a quantidade de camisetas médias? \n");
  scanf("%d", &quantidadeCamisetaMedia);

  printf("Qual a quantidade de camisetas grandes? \n");
  scanf("%d", &quantidadeCamisetaGrande);

  valorTotal += (quantidadeCamisetaPequena * precoTamanhoPequeno);
  valorTotal += (quantidadeCamisetaMedia * precoTamanhoMedio);
  valorTotal += (quantidadeCamisetaGrande * precoTamanhoGrande);

  printf("---------- \n");
  printf("O valor total da compra é de R$ %d\n", valorTotal);

	return 0;
}
