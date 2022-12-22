#include<stdio.h>

struct time
{
    int hour;
    int min;
    int sec;
};

int main()
{
    struct time start, stop, diff;
    printf("\nEnter hour:min:sec of start time: ");
    scanf("%d:%d:%d", &start.hour, &start.min, &start.sec);
    printf("\nEnter hour:min:sec of stop time: ");
    scanf("%d:%d:%d", &stop.hour, &stop.min, &stop.sec);

    if (start.sec>stop.sec)
    {
        stop.sec+=60;
        --stop.min;
    }

    if (start.min>stop.min)
    {
        stop.min+=60;
        --stop.hour;
    }

    diff.hour=stop.hour-start.hour;
    diff.min=stop.min-start.min;
    diff.sec=stop.sec-start.sec;

    printf("\nThe difference between bothe timings is %d:%d:%d", diff.hour, diff.min, diff.sec);
    return 0;
}