/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */                                        /*   main.c                                             :+:::    :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wesley42 <wesley42@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 15:00:00 by wesley42          #+#    #+#             */
/*   Updated: 2025/03/01 15:10:00 by wesley42         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>

int main()
{	
	//contagem de caracteres
	int n;
	char str[] = "banana";
	for (n = 0; str[n] != '\0'; n++);
	//contagem de caracteres - retornando int n = 6 and word str = BANANA
	
	
	for (int i = 0; i < n; i++) //para cada letra vou rodar outro for para comparar str
	{
		int found = 0;

		for (int j = 0; j < n; ++j)
		{
			if (i != j && str[i] == str[j])
			{
				found = 1;
				break;
			}
		}
			if (found == 0) return printf("%d", str[i]);
	}
	return printf("teste");
	printf("%s", str);
	return 0;
*/
// C program to find the index of the first
// non repeating character using nested loop

#include <stdio.h>

// Function to find the index of the first
// non-repeating character
char nonRepeatingChar(char s[]) {
    int n;
    for (n = 0; n[s] != '\0'; n++);

    // Iterate over each character in the string
    for (int i = 0; i < n; ++i) {
        int found = 0;

        // Check if the character repeats in the
        // rest of the string
        for (int j = 0; j < n; ++j) {
            if (i != j && s[i] == s[j]) {
                found = 1;
                break;
            }
        }

        // If character does not repeat, return it
        if (found == 0)
            return s[i];
    }

    // If no such character is found, return '$'
    return '$';
}

int main() {
    char s[100];
    printf("Type a word Here: \n");
    scanf("%100s", s);

    if (nonRepeatingChar(s) == '$'){
    	printf("No unique character found.\n");
    }
    else{
    	printf("First non-repeating character: %c\n", nonRepeatingChar(s));
    }
    return 0;
}
