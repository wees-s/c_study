#include <stdio.h>

//Receive a input of user and find the major number prime in.

/*int main(){
	int i;
	int n;
	int flag = 1;
	printf("Type a number: ");
	scanf("%d", &n);
	int myNum = n;
	
	
	
	//Contando até o número desejado
	while (flag == 0){
		myNum--;
		flag = 1;	
		for(i = 2; i < myNum; i++){
			if (myNum % i == 0)
			{
				flag = 0;
				break;	
			}
		}
	if (flag == 1){
		printf("%d Is a prime Number", myNum);
	}
	}

return 0;
}
*/
int primeNum(int n){
	if (n < 2) return -1;
        int i;
        for (i = 2; i < n; i++){
                if (n % i == 0){
                	return primeNum(n-1);
                }
        }
        return n;
}
int main(){
        int n;
        printf("Type a integer Number and discover the highest Prime number in: \n");
        scanf("%d", &n);
	n--;
	if (primeNum(n) == -1){
		printf("No prime number found.\n");
	}

	else{
        	printf("Largest prime number below %d: %d\n", n+1, primeNum(n));
	}
        return 0;
}
