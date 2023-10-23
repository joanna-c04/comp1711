#include <stdio.h>

//Defines a function Fahrenheit to Celcius 
//Takes fahrenheit from the main function and assigns its value to f_temp.
float fahr_to_celsius (float f_temp)
{
    float c_temp;
//Celcius = (Fahrenheit -32) / 1.8
    c_temp = (f_temp - 32)/1.8;
//Return the results
    return c_temp;
}

//Takes Fahrenheit from main function and assigns its value to f_temp
float fahr_to_kelvin (float f_temp)
{
    float k_temp;
//Takes f_temp and puts it through fahr_to_celcius function to obtain a value in celcius to convert into Kelvin
    k_temp = fahr_to_celsius(f_temp) + 273.15;
//Return the results
    return k_temp;
}

float fahr_to_neweton (float f_temp)
{
    float(n_temp);
    n_temp = (f_temp - 32) / 5.45454555;
    return n_temp;
}

int main () 
{
    float fahrenheit;
    char option;
//User inputs a temperature and this is stored in fahrenheit as a float
    printf ("Enter a temperature to convert in Fahrenheit:\n");
    scanf ("%f", &fahrenheit);

//User is given 3 options
    printf ("\n");
    printf ("Select A to convert to Celsius\n");
    printf ("Select B to convert to Kelvin\n");
    printf ("Select N to convert to Newtons\n");
    printf ("Select Q to quit\n");

    scanf(" %c", &option);

    switch (option)
    {
        case 'A': printf ("Converted to degrees Celsius: %f\n", fahr_to_celsius(fahrenheit));
                  break;

        case 'B': printf ("Converted to Kelvin: %f\n", fahr_to_kelvin(fahrenheit));
                  break;

        case 'N' : printf ("Converted to Newtons: %f\n", fahr_to_neweton(fahrenheit));

        case 'Q': break;

        default:  break;
    }

    return 0;
}