#include <stdio.h> //importando a biblioteca

int main(){ //iniciando a função
    int a = 10; //gerando um valor para dentro da variavel do tipo INTEIRO, ou seja >> int a = #
    int b = 20; //gerando um valor para dentro da variavel do tipo INTEIRO, ou seja >> int b = #
    printf("%d\n", a+b); //printando a soma das variaveis a e b, aqui no caso foi feito o calculo diretamente na printf
    //Dentro da printf %d - indica que dentro das aspas "" será gerado o resultado do tipo INTEIRO.
    //O \n - indica que após a execução da printf, será gerado uma quebra de linha.
    //sempre necessário finalizar qualquer execução com ;
    //após a print é colocado a , (vírgula) para definir o que será apresentado dentro da print.
    //nesse caso é apresentado a soma de a+b.
    //detalhe importante**** SEMPRE o que será apresentado na print após a virgula é por ordem de chamada, e nesse caso, tenho apenas a chamada de a+b.
    return 0;
}