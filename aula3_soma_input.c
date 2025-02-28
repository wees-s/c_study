#include <stdio.h>

int myNum;
char myChar;

int main(){
    printf("Print a Number and a Character");
    scanf("%d %c", &myNum, &myChar);

    printf("Your Number is: %d\n", myNum);
    printf("Your Character is: %c\n", myChar);

    return 0;
}