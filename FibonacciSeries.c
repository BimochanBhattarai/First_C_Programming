// This is the program to display fibonacci Series.

#include <stdio.h>

int main()
{
    int numloop, i, num1 = 0, num2 = 1, num3;
    printf("Enter number of digits you wanna print: \n");
    scanf("%d", &numloop);
    for (i = 0; i < numloop; i++)
    {
        printf("%d \n", num1);
        num3 = num1 + num2;
        num1 = num2;
        num2 = num3;
    }

    return 0;
}