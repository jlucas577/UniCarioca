Algoritmo "Bakery"
// Disciplina   : Algoritmos I
// Professor   : Priscilla Fonseca de Abreu Braz
// Descrição   : Esse algoritmo tem como objetivo informar quanto uma padaria
//               arrecadou com a venda dos pães e broas (juntos) e quanto deve
//               guardar numa conta de poupança .
// Autor(a)    : João Lucas Martins de Sousa
// Data atual  : 12/04/2021
Var
   paes, broas : inteiro
   totalDaVenda, totalDaPoupanca : real

Inicio
      Escreval("Seja bem vindo(a) ao PDV da padaria Segredos Di Laura!")
      
      Escreval("Quantos pães foram vendidos hoje?")
      Leia(paes)
      
      Escreval("Quantas broas foram vendidas hoje?")
      Leia(broas)
      
      totalDaVenda := (paes * 0.60) + (broas * 2.50)
      totalDaPoupanca := (10 * totalDaVenda) / 100
      
      Escreval("No dia de hoje foram vendidos ao total R$", totalDaVenda)
      Escreval("Você deve guardar em sua poupança um total de R$", totalDaPoupanca)
Fimalgoritmo