algoritmo "CalcularSalarioComAumento"
// Função: Calcular o valor final do salário de uma pessoa com um determinado aumento
// Autores: João Lucas Martins de Sousa (2021100688) e Petterson Bryan Holanda Gonçalves (2020101433)
// Data: 05 de março de 2021
var 
	aumentoNoSalario, salarioAtual, salarioComAumento: real

inicio
	escreval("Vamos calcular em quanto ficará o seu novo salário? \n Para começar, basta digitar o valor atual do seu sálario:")
	leia(salarioAtual)
	
	escreval("Por fim, digite em quanto porcento o seu salário vai aumentar:")
	leia(aumentoNoSalario)

	salarioComAumento <- (salarioAtual * (aumentoNoSalario / 100))

	escreval("O valor total do seu novo salário é de:")
	salarioComAumento <- (salarioComAumento + salarioAtual)
fimalgoritmo
