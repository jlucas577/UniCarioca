#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define vectorSize 10

/*
  Elabore um algoritmo que possibilite montar uma LISTA, uma
  FILA e uma PILHA. O usuário escolhe que estrutura deseja montar.

  GRUPO: João Lucas Martins de Sousa (2021100688), Lucas Ferreira de Oliveira (2018201524),
    Gabriel Alves Varella da Costa (2020100673), Laiza Gonçalves Fernandes (2021100643),
    Fabricio Luiz Dias Resende (2020100511)
*/

typedef struct {
  int data[vectorSize];
  int start;
  int end;
} DataStructure;

void aboutGroup();
int selectDataStructure();
void list();
void listMenu(DataStructure myList);
void listUp(DataStructure myList);
void listDown(DataStructure myList);
void queue();
void queueMenu(DataStructure myQueue);
void queueUp(DataStructure myStack);
void queueDown(DataStructure myStack);
void stack();
void stackMenu(DataStructure myStack);
void stackUp(DataStructure myStack);
void stackDown(DataStructure myStack);
void printData(DataStructure myData, int vertical);

int main() {
  setlocale(LC_ALL, "Portuguese");
  aboutGroup();

  int dataStructure = selectDataStructure();

  if (dataStructure == 1) {
    list();
  } else if (dataStructure == 2) {
    queue();
  } else if (dataStructure == 3) {
    stack();
  }

  return 0;
}

void aboutGroup() {
  printf("----------\n");
  printf("Estrutura de dados - APS AV1 \n\n");
  printf("GRUPO: João Lucas Martins de Sousa (2021100688), Lucas Ferreira de Oliveira (2018201524),");
    printf("Gabriel Alves Varella da Costa (2020100673), Laiza Gonçalves Fernandes (2021100643),");
    printf("Fabricio Luiz Dias Resende (2020100511) \n\n");
}

int selectDataStructure() {
  int selectedDataStructure = 0;

  printf("Qual tipo de estrutura de dados você deseja montar? \n\n");
  printf("(1) Lista \n");
  printf("(2) Fila \n");
  printf("(3) Pilha \n\n");

  fflush(stdin);
  scanf("%i", &selectedDataStructure);

  printf("\n----------\n\n");

  return selectedDataStructure;
}

/*
  Lista
*/
void list() {
  DataStructure myList;
    myList.start = 0;
    myList.end = 0;

  printf("Lista");

  listMenu(myList);
}

void listMenu(DataStructure myList) {
  int selectedOption = 0;

  printf("\n\n");
  printf("(1) Incluir novo elemento \n");
  printf("(2) Deletar elemento \n");
  printf("(3) Voltar ao menu inicial \n");
  printf("(4) Parar execução \n\n");

  fflush(stdin);
  scanf("%i", &selectedOption);

  if (selectedOption == 1) {
    listUp(myList);
  } else if (selectedOption == 2) {
    listDown(myList);
  } else if (selectedOption == 3) {
    main();
  } else {
    printf("\nExecução finalizada!\n");
  }
}

void listUp(DataStructure myList) {
  int element = 0;

  if (myList.end == vectorSize) {
    printf("\nA lista está cheia, impossível listar um novo elemento!\n");
  } else {
    printf("\nDigite o valor que deseja listar: \n");

    fflush(stdin);
    scanf("%i", &element);

    myList.data[myList.end] = element;
    myList.end++;
  }

  printData(myList, 0);
  listMenu(myList);
}

void listDown(DataStructure myList) {
  int element = 0, i, j;

  if (myList.end == myList.start) {
     printf("\nA lista está vazia!\n");
  } else {
    printData(myList, 0);

    printf("\n\nDigite o valor que deseja remover: \n");

    fflush(stdin);
    scanf("%i", &element);

    for(i = 0; i < myList.end; i++) {
        if (myList.data[i] == element) {
            for (j = i; j < myList.end - 1; j++) {
                myList.data[j] = myList.data[j + 1];
            }
            myList.end--;
        }
    }
  }

  printData(myList, 0);
  listMenu(myList);
}

/*
  Fila
*/
void queue() {
  DataStructure myQueue;
    myQueue.start = 0;
    myQueue.end = 0;

  printf("Fila");

  queueMenu(myQueue);
}

void queueMenu(DataStructure myQueue) {
  int selectedOption = 0;

  printf("\n\n");
  printf("(1) Incluir novo elemento \n");
  printf("(2) Deletar elemento \n");
  printf("(3) Voltar ao menu inicial \n");
  printf("(4) Parar execução \n\n");

  fflush(stdin);
  scanf("%i", &selectedOption);

  if (selectedOption == 1) {
    queueUp(myQueue);
  } else if (selectedOption == 2) {
    queueDown(myQueue);
  } else if (selectedOption == 3) {
    main();
  } else {
    printf("\nExecução finalizada!\n");
  }
}

void queueUp(DataStructure myQueue) {
  int element = 0;

  if (myQueue.end == vectorSize) {
    printf("\nA fila está cheia, impossível enfileirar um novo elemento!\n");
  } else {
    printf("\nDigite o valor que deseja enfileirar: \n");

    fflush(stdin);
    scanf("%i", &element);

    myQueue.data[myQueue.end] = element;
    myQueue.end++;
  }

  printData(myQueue, 0);
  queueMenu(myQueue);
}

void queueDown(DataStructure myQueue) {
  if (myQueue.end == myQueue.start) {
     printf("\nA fila está vazia!\n");
  } else {
    myQueue.data[myQueue.start] = 0;
    myQueue.start++;
  }

  printData(myQueue, 0);
  queueMenu(myQueue);
}

/*
  Pilha
*/
void stack() {
  DataStructure myStack;
    myStack.start = 0;
    myStack.end = 0;

  printf("Pilha");

  stackMenu(myStack);
}

void stackMenu(DataStructure myStack) {
  int selectedOption = 0;

  printf("\n\n");
  printf("(1) Incluir novo elemento \n");
  printf("(2) Deletar elemento \n");
  printf("(3) Voltar ao menu inicial \n");
  printf("(4) Parar execução \n\n");

  fflush(stdin);
  scanf("%i", &selectedOption);

  if (selectedOption == 1) {
    stackUp(myStack);
  } else if (selectedOption == 2) {
    stackDown(myStack);
  } else if (selectedOption == 3) {
    main();
  } else {
    printf("\nExecução finalizada!\n");
  }
}

void stackUp(DataStructure myStack) {
  int element = 0;

  if (myStack.end == vectorSize) {
    printf("\nA pilha está cheia, impossível empilhar um novo elemento!\n");
  } else {
    printf("\nDigite o valor que deseja empilhar: \n");

    fflush(stdin);
    scanf("%i", &element);

    myStack.data[myStack.end] = element;
    myStack.end++;
  }

  printData(myStack, 1);
  stackMenu(myStack);
}

void stackDown(DataStructure myStack) {
  if (myStack.end == myStack.start) {
     printf("\nA pilha está vazia!\n");
  } else {
     myStack.data[myStack.end] = 0;
     myStack.end--;
  }

  printData(myStack, 1);
  stackMenu(myStack);
}

/*
  Imprimir
*/
void printData(DataStructure myData, int vertical) {
  int i;

  if (vertical == 1) {
    for (i = vectorSize; i >= 0; i--) {
      printf("\n[");
      if (i < myData.end) {
        printf("%d", myData.data[i]);
      } else {
        printf("0");
      }
      printf("]");
    }
  } else {
    printf("\n[ ");

    for (i = 0; i < vectorSize; i++) {
      if (i < myData.end) {
        printf("%d ", myData.data[i]);
      } else {
        printf("0 ");
      }
    }
    printf("]");
  }
}
