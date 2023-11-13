#include "utilities.h"

int main()
{
    // array of daily readings
    reading daily_readings[100];

    char line[buffer_size];
    char filename[buffer_size];

    // get filename from the user
    printf("Please enter the name of the data file: ");

    // these lines read in a line from the stdin (where the user types)
    // and then takes the actual string out of it
    // this removes any spaces or newlines.
    fgets(line, buffer_size, stdin);
    sscanf(line, " %s ", filename);

    char choice;
    int counter = 0;
    float mean = 0;
    float lowest;
    float highest;
    
    //New line
    FILE *input = open_file(filename, "r");
    //Read the data in from the file here
    counter = 0;
    while (fgets(line, buffer_size, input))
    {
            // split up the line and store it in the right place
            // using the & operator to pass in a pointer to the bloodIron so it stores it
            tokeniseRecord(line, ",", daily_readings[counter].date, &daily_readings[counter].bloodIron);
            if (daily_readings[counter].date == NULL || daily_readings[counter].bloodIron == 0)
            {
                printf("Invalid data on line: %d\n", counter+1);
                return 0;
            }
            counter++; 
    }
    
    
    while (1)
    {
        /*
        // Moved to utilities.h
        FILE *input = fopen(filename, "r");
        if (!input)
        {
            printf("Error: File could not be opened\n");
            return 1;
        }
        */


        printf("A: View all your blood iron levels\n");                       // BRONZE
        printf("B: View your average blood iron level\n");                    // BRONZE
        printf("C: View your lowest blood iron level\n");                     // SILVER
        printf("D: View your highest blood iron level\n");                    // SILVER
        printf("E: View the blood iron levels for a specific month\n");       // SILVER/GOLD
        printf("F: See some additional statistics about your iron levels\n"); // GOLD - see readme.md
        printf("G: Generate a graph of your iron levels\n");                  // GOLD/PLATINUM - see readme.md
        printf("Q: Exit the program\n");

        // get the next character typed in and store in the 'choice'
        choice = getchar();

        // this gets rid of the newline character which the user will enter
        // as otherwise this will stay in the stdin and be read next time
        while (getchar() != '\n');


        // switch statement to control the menu.
        switch (choice)
        {
        // this allows for either capital or lower case
        case 'A':
        case 'a':
            for (int i = 0; i < counter; i++)
            {
                printf("%s - Blood iron: %.1f\n", daily_readings[i].date, daily_readings[i].bloodIron);
            }
            fclose(input);
            break;

        case 'B':
        case 'b':
            mean /= counter;
            printf("Your average blood iron was %.2f\n", mean);
            fclose(input);
            break;

        case 'C':
        case 'c':
            lowest = 10000000;
            for (int i = 0; i < counter; i++)
            {
                if (daily_readings[i].bloodIron < lowest)
                    lowest = daily_readings[i].bloodIron;
            }
            printf("The lowest blood iron reading is: %.1f\n", lowest);
            break;

        case 'D':
        case 'd':
            highest = 0;
            for (int i = 0; i < counter; i++)
            {
                if (daily_readings[i].bloodIron > highest)
                    highest = daily_readings[i].bloodIron;
            }
            printf("The highest blood iron reading is: %.1f\n", highest);
            break;

        case 'E':
        case 'e':
            return 0;
            break;

        case 'F':
        case 'f':
            return 0;
            break;

        case 'G':
        case 'g':
            return 0;
            break;

        case 'Q':
        case 'q':
            return 0;
            break;

        // if they type anything else:
        default:
            printf("Invalid choice\n");
            break;
        }
    }
}