/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:::    :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wesley42 <wesley42@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 15:00:00 by wesley42          #+#    #+#             */
/*   Updated: 2025/03/01 15:10:00 by wesley42         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * Function: main
 * -----------------
 * Read two integers from the user and print a sum of them.
 *
 * Returns: Always returns (0).
 */
#include <stdio.h>

int main(void)
{
	int x;
	int y;

	printf("Digite um número: \n");
	scanf("%d", &x);
	printf("Digite outro número: \n");
	scanf("%d", &y);
	int z = x+y;
	printf("A soma de %d + %d = %d", x, y, z);
	return 0;
}
