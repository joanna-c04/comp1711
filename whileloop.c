#include <stdio.h>

int main() {
    int a = 10;

    while (a < 50000)
    {
        printf ("a is equal to %d\n", a);
        a+=2;
    }
    printf ("I've finished the loop and a is equal to %d\n", a);

    return (0);
}