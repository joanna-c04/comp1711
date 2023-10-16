#include <stdio.h> 

int main(){

    float a;
    printf("Please enter the first number ");
    scanf("%f",&a);
    float b;
    printf("Please enter the second integer ");
    scanf("%f", &b);
    float c = a+b;
    
    printf("The sum of %.3f and %.3f is %.3f\n", a, b, c);
    
    return 0;
}

