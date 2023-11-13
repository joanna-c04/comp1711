#include <stdio.h>
#include <stdlib.h>
int main() {
    char* filename = "input.txt";
    FILE * file = fopen(filename,"r");
    int number[500];
    int buffer_size = 100;
    char line_buffer[buffer_size];

    while (fgets(line_buffer, buffer_size, file) != NULL) {
        printf("%d\n", atoi(line_buffer));
    }
    fclose(file);
    return 0;

}