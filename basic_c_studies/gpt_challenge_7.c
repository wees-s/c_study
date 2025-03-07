#include <stdio.h>

////////////////////////
//Fatorial
////////////////////////

/////////////////////////////////////////////
//A program that write a value of a fatorial
/////////////////////////////////////////////

int main()
{
	int	res = 1;//definindo uma variável para o resultado e atribuindo um valor a ela para evitar bugs
	int	i;//iniciando a variável que sofrerá alterações e receberá o número do usuário
	printf("Type a number and discover your value of fatorial (!): \n"); //apresentação
	scanf("%d", &i);//recebendo o valor
	
	while (i > 1)//enquanto i for maior que 1, continue calculando.
	{
		res *= i;//fatorial é o número multiplicado por todos seus antecessores, por conta disso a lógica é a seguinte:
		i--;	 //res = 1, valor do usuário * 1 para iniciar, e após, multiplicar número do usuário -1 sucessivamente.
	}
	printf("%d\n", res); //apresentação resultado final
	return	0;
}
