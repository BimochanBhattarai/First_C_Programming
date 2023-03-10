#include <stdio.h>

int main()
{
    int a, b, c;
    float d;
    printf("Enter 3 numbers:\n");
    scanf("%d %d %d", &a, &b, &c);
    d = a - b + c * (a - b) + (float)a / b;
    printf("d=%f",d);
    return 0;
}