#include <stdio.h>

/*
//Question 1
float circleArea (float radius) {
    float area;
    area = (3.1415 * radius * radius);
    return area; 
}

int main()
{
    float input_radius;
    printf("Please enter the radius for your circle: \n");
    scanf("%f", &input_radius);
    printf("The area of a circle with radius %f is %f.\n",input_radius, circleArea(input_radius));
    return 0;
}
*/

/*
//Question 2 
float sphere_volume (float radius) {
    float volume;
    volume  = (4.0f/3.0f * 3.1415 * radius * radius * radius);
    return volume; 
}

int main()
{
    float volume_radius;
    printf("Please enter the radius for your sphere: \n");
    scanf("%f", &volume_radius);
    printf("The volume of a sphere with radius %f is %f.\n", volume_radius, sphere_volume(volume_radius));
*/

//Question 3
int str_len(string)
{
int count = 0;
for (size_t i = 0; i < count; i++)
{
    /* code */
}

return count;

}


int main()
{
    char input_string[250];
    printf("Please enter a string with less than 250 characters: \n");
    scanf("%s", input_string);
    printf("The length of your string is %d\n", str_len(input_string));
    return 0;
}
