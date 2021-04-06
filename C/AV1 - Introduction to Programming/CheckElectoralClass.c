#include <stdio.h>

/*
	en_US: This algorithm aims to use the informed age of a person
   to show her electoral class, taking into account that minors under 16
   do not vote ("non-voting"), that voting is mandatory for adults between 18 and
   70 years ("mandatory voter") and that voting is optional for voters with
   16, 17 or older than 70 years old ("optional voter").
*/

/*
	pt_BR: Esse algoritmo tem como objetivo utilizar a idade informada de uma pessoa
  para exibir a classe eleitoral dela, levando em consideração que menores de 16
  não votam ("não votantes"), que o voto é obrigatório para adultos entre 18 e
  70 anos ("eleitor obrigatório") e que o voto é opcional para eleitores com
  16, 17 ou mais que 70 anos ("eleitor facultativo").
*/

int main() {
  int peopleAge = 0;

	printf("Vamos descobrir que a sua classe eleitoral? \n");

  printf("Quantos anos você tem atualmente?");
  scanf("%d", &peopleAge);

  if (peopleAge < 16) {
    printf("Sua classe eleitoral é: Não votante");
  } else if (peopleAge >= 18 && peopleAge <= 70) {
    printf("Sua classe eleitoral é: Eleitor obrigatório");
  } else {
    printf("Sua classe eleitoral é: Eleitor facultativo");
  }

	return 0;
}
