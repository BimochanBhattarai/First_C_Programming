// C program to calculate the factorial.

#include <stdio.h>

int main()
{
    int num, a = 1;
    printf("Enter a number you wanna find factorial of.\n");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++)
    {
        a = a * i;
    }
    printf("%d", a);
    return 0;
}