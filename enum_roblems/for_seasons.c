#include <stdio.h>

typedef enum{ WINTER = 1, SPRING, SUMMER, FALL} SEASONS;

int main() {
    int month = 0;
    int season = 0;

    printf("Enter month: ");
    scanf("%d", &month);

    if (month == 12 || month == 1 || month == 2) season = WINTER;
    else if (month >= 3 && month <= 5) season = SPRING;
    else if (month >= 6 && month <= 8) season = SUMMER;
    else if (month >= 9 && month <= 11) season = FALL;
    
    switch (season) {
        case WINTER: printf("December, January, February → WINTER\n"); break;
        case SPRING: printf("March, April, May → SPRING\n"); break;
        case SUMMER: printf("June, July, August → SUMMER\n"); break;
        case FALL: printf("September, October, November → FALL\n"); break;
    }

    return 0;
}
    
