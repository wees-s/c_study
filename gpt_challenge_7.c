#include <stdio.h>

////////////////////////
//Fatorial
////////////////////////

/////////////////////////////////////////////
//A program that write a value of a fatorial
/////////////////////////////////////////////

int main()
{
	int	res = 1;
	int	i;
	printf("Type a number and discover your value of fatorial (!): \n");
	scanf("%d", &i);
	
	while (i > 1)
	{
		res *= i;
		i--;
	}
	printf("%d\n", res);
	return	0;
}
