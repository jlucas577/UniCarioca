#include <stdio.h>

/*
  O banco XXX concederá um crédito especial aos seus clientes de acordo com o saldo
  médio no último ano. Faça um programa que leia o saldo médio de 10 clientes e
  calcule o valor do crédito de cada um de acordo com a tabela a seguir.
  Imprima uma mensagem informando o saldo médio e o valor do crédito para cada cliente.
  OBS.: O valor do crédito deve ser calculado utilizando uma função, calculaCredito,
  que receberá por parâmetro o saldo médio informado pelo usuário. O programa deve usar
  apenas variáveis locais.

  SALDO MÉDIO	                PERCENTUAL
  0 – 500	(inclusive)         Nenhum crédito
  500 – 1000 (inclusive)      30% do valor do saldo médio
  1000 – 3000	(inclusive)     40% do valor do saldo médio
  Acima de 3000	            50% do valor do saldo médio

  GRUPO:  João Lucas Martins, João Carlos Pereira da Silva, João Marcio Vieira Almeida Junior
*/

int calculaCredito(int saldoMedio) {
    printf("Saldo médio do cliente: R$ %d \n", saldoMedio);

    if (saldoMedio > 500 && saldoMedio <= 1000) {
        int credito = (30 * saldoMedio) / 100;

        printf("Crédito: R$ %d \n", credito);
    } else if (saldoMedio > 1000 && saldoMedio <= 3000) {
        int credito = (40 * saldoMedio) / 100;

        printf("Crédito: R$ %d \n", credito);
    } else if (saldoMedio > 3000) {
        int credito = (50 * saldoMedio) / 100;

        printf("Crédito: R$ %d \n", credito);
    } else {
        printf("Crédito: Nenhum crédito \n");
    }

    printf("---------- \n");
}

int main() {
    int numero = 0,
        saldoMedio = 0;

    do {
        printf("Digite o saldo médio do %dº cliente: \n", (numero + 1));
        scanf("%d", &saldoMedio);

        calculaCredito(saldoMedio);

        numero = numero + 1;
    } while (numero < 10);
}
