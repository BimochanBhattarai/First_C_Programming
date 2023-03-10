#include <stdio.h>

int main()
{
    int t, hour, minute, second;
    printf("What is the second you want to calculate?\n");
    scanf("%d", &t);
    hour = t / 3600;
    minute = (t % 3600) / 60;
    second = (t % 3600) % 60;
    printf("Hour is %d\nMinutes is %d\nSecond is %d\n", hour, minute, second);
    // int hour2, min2, sec2;
    // hour2 = t / 3600;
    // min2 = t / 60 - hour2 * 60;
    // sec2 = (t % 3600) % 60;
    // printf("Hour is %d\nMinutes is %d\nSecond is %d\n", hour2, min2, sec2);
    // /*t=7265
    // hour2 = 2
    // mins2 = 121 - (2 * 60)
    //       = 1
    // */
    return 0;
}