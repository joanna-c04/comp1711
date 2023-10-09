#include <stdio.h> 

int main(){

    float length;
    float width;
    float area;
    
    printf("Please enter the length of the rectangle: ");
    scanf("%f", &length);
    printf("Please enter the width of the rectangle: ");
    scanf("%f", &width);

    area = length * width;

    printf("The area of the rectangle is %g\n", area);
    
    return 0;
}