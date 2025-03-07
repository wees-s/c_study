//RECEBA O VALOR DE DUAS VARIÁVEIS E APRESENTE ELAS TROCADAS SEM USAR UMA TERCEIRA VARIÁVEL
#include <stdio.h>

int main(void)
{	//inversão de números
	int a = 10; //variável 1
	int b = 25; //variável 2
	printf("Before: a = %d, b = %d\n", a, b); //apresentando os valores antes da conversão
	a = b - a; //a = 25-10 = a=15             //a lógica é cálculo matemático simples para converter os valores
	b = b - a; //b = 25-15 = b=10 (antigo a)
	a = a + b; //a = 15+10 = a=25 (antigo b)
	printf("After: a = %d, b = %d\n", a, b); //apresentando os valores após a conversão
	return 0; //finalizando a função
}
