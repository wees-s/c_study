/*DETALHES IMPORTANTES ANTES DE CONTINUAR:
>>>> %d DENTRO DE UMA printf("%d") SIGNIFICA QUE SERÁ APRESENTADO UM NÚMERO INTEIRO
>>>> %c DENTRO DE UMA printf("%c") SIGNIFICA QUE SERÁ APRESENTADO UM CARACTERE
*/


#include <stdio.h> //chamando biblioteca padrão de entrada e saída em C

int myNum; //defini uma variável sem valor, indicando INT para inteiro e definindo o nome dela.
char myChar; //variável do tipo CHAR, que é um caractere.

int main(){ //inicio da função int main
    printf("Print a Number and a Character"); //apresentação para o usuário
    scanf("%d %c", &myNum, &myChar); //IMPORTANTE, aqui estou recebendo os inputs por ordem. O primeiro input será um número inteiro e o segundo um caractere.
    //em scanf é necessário indicar a variável que o programa lerá: %d para inteiro e %c para caractere.
    //o & é utilizado para indicar o endereço de memória da variável, ou seja, onde ela está armazenada. No caso, %d para &myNum e %c para &myChar.

    printf("Your Number is: %d\n", myNum); //apresentação do número digitado pelo usuário
    printf("Your Character is: %c\n", myChar);//apresentação do caractere digitado pelo usuário

    return 0; //finalizando a função
}