#include <stdio.h>

int main(){
    //setting up 15 slots of memory for a string 
    char name[15];

    //prompts the user
    printf("Hello, please enter your name: ");

    //takes a user input and stores in name
    scanf("%s", name);

    //prints the string followed by name on a separate line
    printf("Your name is %s\n", name);

    return 0;

}