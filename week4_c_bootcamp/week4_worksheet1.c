#include "utils.h"

int main() {

    char* filename = "squares.dat";
    FILE *file = fopen(filename, "w");
    int number[1000];
    int buffer_size = 100;
    char line_buffer[buffer_size];
    int n;
    int square;
    int line_number = 0;
    int total = 0;
    printf("Enter your integer: \n");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        square = i*i;
        fprintf(file, "%d\n", square);
        total += square;
    }

    float mean = total /n;

    while (fgets(line_buffer, buffer_size, file) !=NULL) {
        printf("%d\n", atoi(line_buffer));
         number[line_number] = atoi(line_buffer);
        line_number++;
    }
    printf("The mean is: %f\n", mean);
    return 0;

}