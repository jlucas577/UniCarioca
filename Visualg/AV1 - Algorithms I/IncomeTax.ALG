Algoritmo "Income Tax"
// Disciplina   : Algoritmos I
// Professor   : Priscilla Fonseca de Abreu Braz
// Descrição   : Esse algoritmo tem como objetivo calcular o imposto
//               de renda a partir da renda mensal informada pelo usu�rio.
// Autor(a)    : Jo�o Lucas Martins de Sousa
// Data atual  : 12/04/2021
Var
   salario, impostoAPagar : real

Inicio
      Escreval("Seja bem vindo(a) a calculadora de imposto de renda!")

      Escreval("Qual � o valor do seu sal�rio?")
      Leia(salario)

      Escreval("O seu sal�rio bruto � de: R$", salario)

      Se (salario <= 1903.98) Entao
         Escreval("Voc� � isento de imposto de renda!")
      Senao
           Se (salario >= 1903.99) Entao
              Se (salario <= 2826.65) Entao
                 impostoAPagar := (7.5 * salario) / 100
              Senao
                   Se (salario <= 3751.05) Entao
                      impostoAPagar := (15 * salario) / 100
                   Senao
                        Se (salario <= 4664.68) Entao
                           impostoAPagar := (22.5 * salario) / 100
                        Senao
                             Se (salario >= 4664.68) Entao
                                impostoAPagar := (27.5 * salario) / 100
                             Fimse
                        Fimse
                   Fimse
              Fimse
           Fimse

           Escreval("Seu imposto de renda est� no valor de R$", impostoAPagar)
      Fimse
Fimalgoritmo
