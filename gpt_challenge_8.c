#include <stdio.h>

#define SIZE 20

int converter(char str[SIZE])
{
	int i = 0;
	int size = 0;
	int res = 0;
	int positive_or_negative = 1;
	int num[SIZE];

	if (str[i] == ' '){
		i++;}
	for (i = 0; str[i] != '\0'; i++)
        {
                if (str[i] == '-'){
                        positive_or_negative = -1;
                }
                if (str[i] >= '0' && str[i] <= '9')
                {
                        num[size] = (str[i]-48);
                        size++;
                }
        }
        for (i = 0; i < size; i++)
        {
                res = res * 10 + num[i];
        }

	res = res * positive_or_negative;
	return res;
}

int main()
{
	char str[SIZE];

	printf("===========================\n==This program will find only numbers in your string, like atoi() function\n===========================");
        printf("\nType characteres and numbers (max %d characters): \n", SIZE - 1);
        fgets(str, SIZE, stdin);
	int res = converter(str);
	printf("Converted integer: %d\n", res);

        return 0;
}
