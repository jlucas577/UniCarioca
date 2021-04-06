#include <stdio.h>

/*
	en_US: This algorithm receives the value of X, Y and Z and aims to verify whether
	they can be the lengths of the sides of a triangle. Showing to user
	a message with the result of this check.
	Note: The length of each side of a triangle must be less than the sum
	the lengths of the other two sides.
*/

/*
	pt_BR: Esse algoritmo recebe o valor de X, Y e Z e tem como objetivo verificar se
	eles podem ser os comprimentos dos lados de um triângulo. Exibindo ao usuário
	uma mensagem com o resultado dessa verificação.
	Obs.: O comprimento de cada lado de um triângulo deve ser menor do que a soma
	dos comprimentos dos outros dois lados.
*/

int main() {
	int X, Y, Z, somaYZ, somaXZ, somaXY = 0;

	printf("Digite o valor de X: \n");
	scanf("%d", &X);

	printf("Digite o valor de Y: \n");
	scanf("%d", &Y);

	printf("Digite o valor de Z: \n");
	scanf("%d", &Z);

	somaYZ = Y + Z;
	somaXZ = X + Z;
	somaXY = X + Y;

	if (X < somaYZ) {
		if (Y < somaXZ) {
			if (Z < somaXY) {
				printf("O triângulo é possível!");
				return 0;
			}
		}
	}

	printf("O triângulo não é possível!");

	return 0;
}
