// C program to display Prime numbers from 1 to any mumber.

#include <stdio.h>

int main()
{
    int num, a = 0;
    printf("Enter number upto which value you want to print prime number.: \n");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++)
    {
        a = 0;
        for (int j = 1; j <= i; j++)
        {
            if (i % j == 0)
            {
                a++;
            }
        }
        if (a == 2)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}