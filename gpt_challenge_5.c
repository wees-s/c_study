#include <stdio.h>

// Function to find the index of the first
// non-repeating character
char nonRepeatingChar(char s[]) {//iniciando uma função que retornará char
    int n;//a variável do tipo inteiro n foi declarada para fazer a contagem dos caracteres
    for (n = 0; n[s] != '\0'; n++);//para n iniciado em 0, enquanto 'n' dentro da string for diferente de NULL, n+1
				   //assim a contagem em N para com a quantidade de caracteres 
    for (int i = 0; i < n; ++i) {//passando por dentro n para cada caractere (que foi contado anteriormente)
        int found = 0;//definindo uma "flag", dizendo que nada foi encontrado found = 0 até que se prove o contrário

        
        for (int j = 0; j < n; ++j) {//passando uma segunda variável 'j' por dentro do primeiro laço para conferir se os caracteres são repetidos
            if (i != j && s[i] == s[j]) {//aqui eu digo > SE número de 'i' for diferente de número de 'j' verifica se o valor atribuído e
                found = 1;		 //o valor de cactere atribuído a eles forem iguais s[i] s[j] ele ENCONTROU letras iguais (found 1)
                break;			 // então eu paro o laço
            }
        }

        if (found == 0) //dizendo que SE found se manter em 0, retorne o valor que foi atribuído a ele em s[i]
            return s[i];
    }

    
    return '$'; //se forem encontrados somente caracteres iguais, retorne um caractere de erro para ser usado em main
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
