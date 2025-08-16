#include <stdio.h>

typedef union {
    struct {
        int hours;
        int minutes;
    } timeParts;
    float totalHours;
} Time;

int main() {
    Time t;

    printf("Enter hours: ");
    scanf("%d", &t.timeParts.hours);

    printf("Enter minutes: ");
    scanf("%d", &t.timeParts.minutes);

    printf("You entered: %d hours, %d minutes\n", t.timeParts.hours, t.timeParts.minutes);
    printf("Interpreted as totalHours (float): %.2f\n", t.totalHours);

    //printf("%d\n", sizeof(Time));
    return 0;
}

