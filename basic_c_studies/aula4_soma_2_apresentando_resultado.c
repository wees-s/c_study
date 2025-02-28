#include <stdio.h> //importando a biblioteca padrão para entradas e saídas

int main(){ //iniciando a função
    int x = 10; //atribuindo a variável x o valor 10
    int y = 21; //atribuindo a variável y o valor 21
    int resultado = x + y; //atribuindo a variável resultado o valor da soma de x+y
    printf("Resultado da soma de %d + %d = %d", x , y , resultado); //printando o resultado da soma de x+y
    /*
    IMPORTANTE >> aqui na printf há algumas formatações:
    * >>>> %d <<<< - indica que será apresentado um valor do tipo inteiro. 
    lembrando que os valores são entregues dentro das aspas "" na ordem em que serão apresentados após a vírgula.
    por isso essa formatação: ("%d + %d = %d", x , y , resultado);
    */
    return 0;//finalizando a função.
}