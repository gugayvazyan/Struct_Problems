#include <stdio.h>

typedef enum { RED, YELLOW, GREEN} LIGHT;

int main() {

    int choice = 0;
    int color = 3;

    printf("Enter number: ");
    scanf("%d", &choice);

    if (choice == RED) color = RED;
    else if (choice == YELLOW) color = YELLOW;
    else if (choice == GREEN) color = GREEN;
    
    switch (color) {
        case(RED) : printf("RED → Stop\n"); break;
        case(YELLOW) : printf("YELLOW → Ready\n"); break;
        case(GREEN) : printf("GREEN → Go\n"); break;
    }

    return 0;
}
