// A program to input your name for first time in c.

#include<stdio.h>
#include<string.h>

int main(){
    char Name[100];
    printf("Enter your name:\n");
    scanf("%[^\n]s", &Name);
    printf("Hello there, %s", Name);
    return 0;
}