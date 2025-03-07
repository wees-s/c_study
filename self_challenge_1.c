#include <stdio.h>
#include <stdlib.h>

void carneCoxao()
{
	float	blucro, preco, peso;
	
	printf("ESCOLHA = COXAO");
	printf("\n\nDigite a base de lucro %%:\n");
	scanf("%f", &blucro);
	printf("Digite o preço pago no KG:\n");
	scanf("%f", &preco);
	printf("Peso total da peça\n");
	scanf("%f", &peso);
	
	float lucro = (blucro/100)+1;
	float percas = 1.3;
	float peca_1 = (preco * percas) * lucro;
	float precototal = preco * peso;
	float lucro_estimado = peca_1 * peso - precototal;
     	
	printf("\n\nPreço mínimo de venda por KG: R$ %.2f\n", peca_1);
	printf("Valor total pago na peça: R$ %.2f\n", precototal);
	printf("Lucro estimado após venda total: R$ %.2f\n\n", lucro_estimado);
}
void carneDianteira()
{
	float   blucro, preco, peso;
        
	printf("ESCOLHA = DIANTEIRO");
	printf("\n\nDigite a base de lucro %%:\n");
        scanf("%f", &blucro);
        printf("Digite o preço pago no KG:\n");
        scanf("%f", &preco);
        printf("Peso total da peça\n");
        scanf("%f", &peso);
        
	float lucro = (blucro/100)+1;
        float percas = 1.23;
        float peca_1 = (preco * percas) * lucro;
        float precototal = preco * peso;
        float lucro_estimado = peca_1 * peso - precototal;
        
	printf("\n\nPreço mínimo de venda por KG: R$ %.2f\n", peca_1);
        printf("Valor total pago na peça: R$ %.2f\n", precototal);
        printf("Lucro estimado após venda total: R$ %.2f\n\n", lucro_estimado);
}
void carneTraseira()
{
	float   blucro, preco, peso;
	
	printf("ESCOLHA = TRASEIRO");
        printf("\n\nDigite a base de lucro %%:\n");
        scanf("%f", &blucro);
        printf("Digite o preço pago no KG:\n");
        scanf("%f", &preco);
        printf("Peso total da peça\n");
        scanf("%f", &peso);
        
	float lucro = (blucro/100)+1;
        float percas = 1.4;
        float peca_1 = (preco * percas) * lucro;
        float precototal = preco * peso;
        float lucro_estimado = peca_1 * peso - precototal;
        
	printf("\n\nPreço mínimo de venda por KG: R$ %.2f\n", peca_1);
        printf("Valor total pago na peça: R$ %.2f\n", precototal);
        printf("Lucro estimado após venda total: R$ %.2f\n\n", lucro_estimado);
}
int main()
{
    	while(1){
    		int opcao;
        	printf("\n\nEscolha a opção que deseja calcular:\n1 - Coxao\n2 - Carne Dianteira\n3 - Carne Traseira\n4 - SAIR\n\n");
        	scanf("%d", &opcao);
        	if (opcao == 1)
        	{
        		carneCoxao();
        	}
        	if (opcao == 2)
        	{
        		carneDianteira();
        	}
        	if (opcao == 3)
        	{
        		carneTraseira();
        	}
        	if (opcao == 4)
        	{
                	return 0;
        	}
	}

        return  0;
}
