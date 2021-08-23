Algoritmo "Account Balance"
// Disciplina   : Algoritmos I
// Professor   : Priscilla Fonseca de Abreu Braz
// Descrição   :
// Autores     : João Lucas Martins de Sousa, Inacio Matheus de Oliveira Garcia
//               Luciene Alves da Silva, Gisselen Motta
// Data atual  : 12/04/2021
Var
   numeroConta, saldoConta, continuar, pessoasNegativadas : inteiro

Inicio
      numeroConta := 0
      saldoConta := 0
      continuar := 1
      pessoasNegativadas := 0

      enquanto (continuar = 1) faca
               Escreval("Digite o n�mero da conta:")
               Leia(numeroConta)

               se (numeroConta < 0) entao
                  continuar := 0
               senao
                  Escreval("Digite o saldo da conta:")
                  Leia(saldoConta)

                  se (saldoConta < 0) entao
                     pessoasNegativadas := pessoasNegativadas + 1

                     Escreval("Saldo negativo")
                  senao
                     Escreval("Saldo positivo")
                  fimse
               fimse

               Escreval("----------")
      fimenquanto

      Escreval("O total de pessoas com saldo negativo são de", pessoasNegativadas, " pessoas")

Fimalgoritmo
