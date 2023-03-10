#include <stdio.h>

int main()
{
    int num1, rem;
    printf("Enter a number to check whether it is divisible by 97 or not: \n");
    scanf("%d", &num1);
    rem = num1 % 97;
    if (rem == 0)
    {
        printf("The number is divisible by 97");
    }
    else
    {
        printf("The number is not divisible by 97");
    }

    return 0;
}