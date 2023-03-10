#include <stdio.h>
#include <math.h>

int main()
{
    float Area, FirstSide, SecondSide, ThirdSide, S;
    printf("Enter the values of all three sides of triangle: \n");
    scanf("%f %f %f", &FirstSide, &SecondSide, &ThirdSide);
    S = (FirstSide + SecondSide + ThirdSide) / 2;
    Area = sqrt(S * (S - FirstSide) * (S - SecondSide) * (S - ThirdSide));
    printf("The area of your triangle is: %f\n", Area);
    return 0;
}