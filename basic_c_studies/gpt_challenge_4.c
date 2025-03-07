/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */                                                                    /*   main.c                                             :+:::    :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xxxxxx42 <xxxxxx42@xxxxxxx.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 15:00:00 by xxxxxx42          #+#    #+#             */
/*   Updated: 2025/03/01 15:10:00 by xxxxxx42         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */  
//Um programa que conte quantos dígitos há em um número inteiro enviado pelo usuário
//
//A lógica para descobrir a quantidade de digitos em um número é dividí-lo por 10 sucessivamente até o número ser menor que 1
//A quantidade de vezes que for dividia, dirá quantos dígitos há.
#include <stdio.h>

int count(int n){ //estou declarando que preciso do valor de n para usar essa função
	int count_number = 0; //iniciando uma variável para ser um contador
	if (n < 0) n = -n; //TORNANDO N POSITIVO, ou seja, SE N for menor que 0, n será -n (-n -n = +n (matematica basica))
	if (n == 0) return 1; //SE N FOR 0, retorne 1 automaticamente
	while (n != 0) //Se N for qualquer valor diferente de 0, faça o cálculo da divisão por 10 (explicado acima)
	{				/// ********LEMBRANDO QUE ISSO PODERIA SER SIMPLIFICADO COM IF N <10 AND >0 RETORNE 1********
		n = n/10; //ENTRANDO NO LOOPING WHILE - enquanto n não for 0, divida por 10 e some +1
		count_number++; //count_number++ é somar +1 em no nosso contador
	}
	return count_number; //retornando o valor contado em count_number++
}

int main(){
	int n; //iniciando a variável n que necessito em count
	printf("Type a integer Number:\n");
	scanf("%d", &n); //o valor de n é capturado aqui
	printf("Numbers of Digits in %d = %d\n", n, count(n)); //printando
	return 0;
}
