#include <stdio.h>

/*
	Esse algoritmo recebe o valor de X, Y e Z e tem como objetivo verificar se
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
