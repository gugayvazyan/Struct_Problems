#include <stdio.h>

typedef enum { JUNUARY = 1, FEBRUARY, MARCH, APRIL, MAY, JUNE, JULY, AUGUST, SEPTEMBER, OCTOBER, NOVEMBER, DECEMBER} MONTHS;

int main() {
    int n = 0;

    printf("Enter  the month: ");
    scanf("%d", &n);


    const char months[] {" ", "December", "January", "February", "March", "April", "May",
                        "June", "July", "August", "September", "October","November" };

    

