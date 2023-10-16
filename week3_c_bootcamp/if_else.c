#include <stdio.h>

int main() {
/*
    int mark = 40;
    if ( mark >= 40 )
    {
        printf("The mark of %d is a pass\n", mark);
    }
    else
    {
        printf("The mark of %d is a fail\n", mark);
    }
*/
/*    int mark = 0;
    printf("What is your mark? ");
    scanf("%d", &mark);

    if ( mark > 100 || mark < 0)
    {
        printf("Your mark is not valid! \n");
    }
    else if ( mark >= 70)
    {
        printf("%d is a first\n", mark);
    }
    else if (mark >= 60)
    {
        printf("%d is a 2:1\n", mark);
    }
    else if (mark >= 40)
    {
        printf("%d is a pass\n", mark);
    }
    else 
    {
        printf("Unfortunately you have not passed \n");
    }
*/
    int a;
    a = 2;

    switch (a)
    {
        case 0: printf("Option 0 has been selected.\n");
        break;

        case 1: printf("Option 1 has been selected.\n");
        break;

        default: printf("A different option has been selected\n");

    }
    return 0;
}