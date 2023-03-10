#include <stdio.h>
#include <math.h>

int main()
{
    float Area;
    int radius;
    printf("Enter the radius of your circle: \n");
    scanf("%d", &radius);
    Area = 3.14 * pow(radius, 2);
    printf("The area of your circle is: %f", Area);
    return 0;
}
