#include "utils.h"

int main() {
/*
    int array_num[10];
    int i = 0;
    float mean;
    int count = 0;
    int total;
    printf("Please enter 10 numbers individually: \n");

    for (i = 0; i < 10; i++)
    {
        printf("Please enter a number: \n");
        scanf("%d", &array_num[i]);
        total += array_num[i];
    }

    mean = total/10;
    printf("\n");

    
    for (i = 0; i<10; i++) {
        printf("%f\n", mean);
    }
*/
/*
   char* filename = "data.txt";
    FILE *file = fopen (filename, "w"); // or "a", "w+", "a+"
    if (file == NULL) {
        printf("Error opening file\n");
        return 1;
    }

    fprintf(file, "Hello World!\n");

    fclose(file);
    return 0;
*/
/*
    char *filename = "data.txt";

    FILE *file = fopen(filename, "w"); // or "a", "w+", "a+"
    if (file == NULL)
    {
        printf("Error opening file\n");
        return 1;
    }

    int number;
    int num_line = 10;
    //Will ask user to input 10 numbers and place directly into the file.
    printf("Type %d numbers: ", num_line);
    
    for (int i = 0; i < num_line; i++)
    {
        scanf("%d", &number);
        fprintf(file, "%d\n", number);
    }

    fclose(file);
    return 0;
*/
/*
    char* filename = "data_example.txt";

    FILE *file = fopen(filename,"w");
    if (file == NULL)
    {
        printf("Error opening file\n");
        return 1;
    }

    int quantity;
    int numbers;
    int total = 0;
    
    printf("How many numbers would you like to enter? \n");
    scanf("%d", &quantity);
    printf("Type %d numbers: ", quantity);
    

    for (int i = 0; i < quantity; i++)
    {
        scanf("%d", &numbers);
        fprintf(file, "%d\n", numbers);
        total += numbers;
    }
    
    float mean = total / quantity;
    fprintf(file, "The total is: %d\n", total);
    fprintf(file, "The mean is: %f\n", mean);
    fclose(file);
    return 0;
*/

    char* filename = "data_example.txt";
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error opening file\n");
        return 1;
    }
    //An arbitrary large number
    int number[1000];
    int line_number = 0;
    //Number of charachter which will be read per line
    int buffer_size = 100;
    //A string which will hold each line as it's read in
    char line_buffer[buffer_size];

    //While there is still stuff in file
    while (fgets(line_buffer, buffer_size, file) != NULL) {
        printf("%d\n", atoi(line_buffer));
        number[line_number] = atoi(line_buffer);
        line_number++;
    }
    printf("There are %d lines.\n", line_number);
    fclose(file);
    return 0;
}


