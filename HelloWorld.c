#include <stdio.h>

int main()
{
    float num1, num2, sum, diff, product, divide;
    printf("Input the value of first number:\n");
    scanf("%f", &num1);
    printf("Input the value of second number:\n");
    scanf("%f", &num2);
    sum = num1 + num2;
    diff = num1 - num2;
    product = num1 * num2;
    divide = num1 / num2;
    printf("The sum of two number is: %+-5.0f \n", sum);
    printf("The difference of two number is: %0.0f \n", diff);
    printf("The product of two number is: %0.0f \n", product);
    printf("The division of two number is: %0.2f \n", divide);
    return 0;
}
