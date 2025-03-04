/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */                                                                                                                                 /*   main.c                                             :+:::    :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wesley42 <wesley42@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 15:00:00 by wesley42          #+#    #+#             */
/*   Updated: 2025/03/01 15:10:00 by wesley42         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */  

#include <stdio.h>

int count(int n){ //estou declarando que preciso do valor de n para usar essa função
	int count_number = 0;
	if (n < 0) n = -n; //começando a usar n aqui
	if (n == 0) return 1;
	while (n != 0)
	{
		n = n/10;
		count_number++; //if n for divisível por 10 e não for 0, some +1
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
