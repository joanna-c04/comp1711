#include <stdio.h>

int main() {
/*    
    int a = 0;

    while (a < 10) {
        printf("a is equal to %d\n", a);
        a += 1;

    }

    printf("I have finished. The final value of a is %d\n", a);
*/
/*
    int a = 0;

    while (a < 50) {
        printf("a is equal to %d\n", a);
        a += 2;

    }
    printf("I have finished. The final value of a is %d\n", a);
*/
/*
    int a = 1;

    while (a < 1000){
        printf("a is equal to %d\n", a );
        a *= 11;

    }
        printf("I have finished. a is equal to %d\n", a );
*/
/*
   int a = 100;

    while (a > 0) {
        printf("a is equal to %d\n", a);
        a -= 5;
    }
    
    printf("I have finished. a is equal to %d\n", a);

*/

/*    int a = 75;
    int guess;
    while (a != guess) {
        printf("Guess the number: ");
        scanf("%d", &guess);
        if (guess > a) {
            printf("Too high! \n");
        }
        if (guess < a) { 
            printf("Too low! \n");
        }
    }
    printf("You guessed right! The number is %d\n ", a);

*/
 int my_array[4] = {1, 5, 6, 90};
    int counter;
    for (counter = 0;counter<4;counter++ ) {
        printf("%d\n", my_array[counter]);

    }

    return (0);

    
}