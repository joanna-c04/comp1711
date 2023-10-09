#include <stdio.h> 

int main(){

    int num1;
    int num2;
    int sum;

    printf("Please enter integer 1: ");
    scanf("%d\n", &num1);
    printf("Please enter integer 2: ");
    scanf("%d\n", &num2);

    sum = num1 + num2;
    printf("The sum of %d and %d is %d\n",num1,num2,sum);
    
    return 0;
}