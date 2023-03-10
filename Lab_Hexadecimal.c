// // A program to convert decimal to hexadecimal number and octal.

// #include <stdio.h>

// int main()
// {
//     int num;
//     printf("Enter a number to convert.\n");
//     scanf("%d", &num);
//     printf("The Hexadecimal Value of %d is %X", num, num);
//     printf("\nThe Octal Value of %d is %o", num, num);

//     return 0;
// }

#include <stdio.h>

int main()
{
    char ch[] = "Bimochan";
    printf("%s\n", ch);
    printf("%5.2s\n", ch);
    printf("%10.4s\n", ch);
    printf("%15.10s1\n", ch);

    return 0;
}