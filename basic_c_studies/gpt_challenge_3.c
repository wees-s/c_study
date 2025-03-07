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
//#include <stdio.h>
// PRIMEIRA PARTE É SOMENTE UM GUIA
//int main() {
//	char string[] = "Hello"; /*Hello = 0,1,2,3,4,5
//	int size = sizeof(string) - 1;
//	/* sizeof = tamanho da string em bytes -1, ignorando o null
//	 * agora = hello = 0,1,2,3,4
//	printf("Original: %s\n", string);
//	int j, k; /*a variable for init and another for the end
//	char c; /*a variable for save last character for change
//
//	for (j = 0, k = size - 1; j < k; j++, k--) {
/*as condições foram que: j e k são início e fim j=0 k=-1
 * condição 2, para execução: faça enquanto j < k
 * condição 3, todas as vezes, j++ k--, ou seja, passe para o próximo j e volte para o k anterior.
 * ENTÃO: j=0 k=5, j=1 k=4, j=2 k=3, j < k = STOP*/
//		c = string[k]; //C=STRING[K] = O
//		string[k] = string[j]; //STRING[K] = STRING[J] = H
//		string[j] = c; //STRING[J] = STRING[C] = O
//	}	//c guarda o valor de k, então pode-se alterar o valor de j e k, e depois, assumir o valor de c em j

//	printf("Reversed = %s\n", string);

//	return 0;
//}


#include <stdio.h>

int main() {
        char string[] = "Hello";
        int size = sizeof(string) - 1;
        printf("Original: %s\n", string);
        int j, k;
	char c;

        for (j = 0, k = size - 1; j < k; j++, k--) {
                c = string[k];
                string[k] = string[j];
                string[j] = c;
        }

        printf("Reversed = %s\n", string);

        return 0;
}
