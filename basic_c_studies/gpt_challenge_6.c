#include <stdio.h>
 
//A program that receive a input of user and find the highest prime number below in

int primeNum(int n){ //função para procurar o número primo
	if (n < 2) return -1; // se o número for menor que 2, retorna um erro
        int i; // declarando a variável i para usar dentro do loop for (não era necessário declarar antes, fiz por opção.
        for (i = 2; i < n; i++){ // loop for (para i iniciando em 2, enquanto i for menor que n, i sobe +1
                if (n % i == 0){ // se o número encontrar algum divisor que o resto dê 0, significa que ele NÃO É PRIMO
                	return primeNum(n-1); // retorno o N-1 para que faça o teste novamente na própria função
                } //NISSO, quando não houver divisor por 0, retornará o número primo
        }
        return n; //então o número primo SERÁ N
}
int main(){
        int n;//declarando a variável n para receber o valor no input
        printf("Type a integer Number and discover the highest Prime number in: \n");
        scanf("%d", &n);//escaneando o valor do usuário para N
	n--; //como no enunciado é para encontrar o maior número primo ABAIXO do número enviado pelo usuário, diminuímos o valor em -1
	if (primeNum(n) == -1){//caso o número enviado pelo usuário for menor que 2, nos retornamos o -1 no primeNum, informando que:
		printf("No prime number found.\n"); //nenhum número primo foi encontrado
	}

	else{//aqui eu digo que SE o número não for do código -1 (que definimos como erro) retorne a print ao usuário
        	printf("Largest prime number below %d: %d\n", n+1, primeNum(n));//apresentação do número do usuário (que era n-1 para n+1)
	}                                                                       //assim a print funciona corretamente
        return 0;								//então apresento o valor de n (o número primo) de primeNum(n)
}
