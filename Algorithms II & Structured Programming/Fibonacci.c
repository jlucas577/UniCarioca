#include <stdio.h>

int fibonacci(int num) {
  if ((num == 1) || (num == 2)) {
    return 1;
  } else {
    return (fibonacci(num - 1) + fibonacci(num - 2));
  }
}

int main() {
  int num, res;

  printf("Digite um número para descobrir sua sequência de Fibonacci: \n");
  scanf("%d", &num);

  if (num >= 0) {
    res = fibonacci(num);

    printf("Sequência de Fibonacci: %d \n", res);
  } else {
    printf("Você precisa digitar um número positivo! \n");
  }
}
