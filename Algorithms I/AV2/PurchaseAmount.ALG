Algoritmo "Purchase Amount"
// Disciplina   : Algoritmos I
// Professor   : Priscilla Fonseca de Abreu Braz
// Descrição   :
// Autores     : João Lucas Martins de Sousa, Inacio Matheus de Oliveira Garcia
//               Luciene Alves da Silva, Gisselen Motta
// Data atual  : 12/04/2021
Var
   valorCompra, descontoCompra, retornoPagamento : real
   condicaoPagamento : inteiro

Funcao calculaPagamento(valor, pagamento : inteiro) : real
Inicio
      Se (pagamento = 1) entao
         descontoCompra := (10 * valor) / 100
         Retorne (valor - descontoCompra)
      Fimse

      Se (pagamento = 2) entao
         descontoCompra := (5 * valor) / 100
         Retorne (valor - descontoCompra)
      Fimse


      Se (pagamento = 3) entao
         Retorne valor
      Fimse

      Se (pagamento = 4) entao
         descontoCompra := (10 * valor) / 100
         Retorne (valor + descontoCompra)
      Fimse
Fimfuncao

Inicio
      valorCompra := 0
      condicaoPagamento := 0
      descontoCompra := 0

      Escreval("Qual é o valor total da compra?")
      Leia(valorCompra)

      Escreval("Qual é a condição de pagamento?")
      Escreval("(1) À vista em dinheiro ou cheque")
      Escreval("(2) À vista no cartão de crédito")
      Escreval("(3) Em duas vezes")
      Escreval("(4) Em 3 vezes")
      Leia(condicaoPagamento)

      retornoPagamento := calculaPagamento(valorCompra, condicaoPagamento)
      Escreval("O valor total da compra é de R$", retornoPagamento)

Fimalgoritmo
