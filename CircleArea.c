#include <stdio.h>
#define PI 3.14

int main()
{
    float radius, Area;
    printf("Enter the radius of circle: \n");
    scanf("%f", &radius);
    Area = PI * radius * radius;
    printf("The area of the given circle is: %f", Area);

    return 0;
}