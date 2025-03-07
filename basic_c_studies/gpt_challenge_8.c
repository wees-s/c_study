#include <stdio.h>

#define SIZE 20 
// recriar atoi() function
int converter(char str[SIZE]) //conversor
{
	int i = 0; //definindo variável que será passada entre os loopings (foi necessário criar antes para garantir algumas contagens)
	int size = 0; //variável para captar tamanho
	int res = 0; //variável para o resultado
	int positive_or_negative = 1; //em caso de ter especificações negativas, será necessário ter um multiplicador positivo ou negativo
	int num[SIZE]; //array para acumular os números

	if (str[i] == ' '){ //pulando espaços em branco e definindo +1 para i (mencionei acima)
		i++;}
	for (i = 0; str[i] != '\0'; i++) //primeiro laço para a identificação dos caracteres evitando o NULL \0
        {
                if (str[i] == '-'){ //verificação do símbolo negativo
                        positive_or_negative = -1; //se for negativo o valor da variável muda para negativo
                }
                if (str[i] >= '0' && str[i] <= '9') //se o valor de str[i] for entre str'0' e str'9' (verificação)
                {
                        num[size] = (str[i]-48); //o valor numérico em ACSII de um número é o valor da STRING -48, por isso estou atribuindo
						 //a num o valor de str[i](uma string) - 48 (transformando a string em inteiro)
                        size++; //aumenta dinamicamente o tamanho de num a cada iteração verdadeira
                }
        }
        for (i = 0; i < size; i++) //os valores foram armazenados separadamente em num[] e é necessário convertê-los em um único número inteiro
				   //a lógica é matemática, como exemplo para números 1, 2, 3
        {			   //o cálculo será 10*1+2=12*10+3=123
                res = res * 10 + num[i]; //aplicação da lógica matemática para a construção do numeral
        }

	res = res * positive_or_negative; //por último, multiplico o número por 1 para verificar se é negativo ou positivo
	return res; //função retorna res
}

int main()
{
	char str[SIZE]; //recebe a entrada do usuário, especifiquei um tamanho máximo de 19 caracteres para esse fim de estudos

	printf("===========================\n==This program will find only numbers in your string, like atoi() function\n===========================");
        printf("\nType characteres and numbers (max %d characters): \n", SIZE - 1);
        fgets(str, SIZE, stdin); //recebe a entrada do usuário com segurança
	int res = converter(str); //recebe o valor de res
	printf("Converted integer: %d\n", res); //printa o valor de res

        return 0; //fim da função
}
