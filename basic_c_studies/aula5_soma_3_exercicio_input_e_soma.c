#include <stdio.h> //importando a biblioteca padrão para entradas e saídas

int x;
int y;
int z;

int main(){
    printf("====Soma de 3 valores=====\n");
    printf("Digite o primeiro número: \n");
    scanf("%d", &x);
    printf("Digite o segundo número: \n");
    scanf("%d", &y);
    printf("Digite o terceiro número: \n");
    scanf("%d", &z);

    int res = x+y+z;
    printf("===============================\n");
    printf("Resultado: %d + %d + %d = %d\n", x, y, z, res);
    return 0;
}