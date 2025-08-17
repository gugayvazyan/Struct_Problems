#include <stdio.h>

typedef enum {SMALL = 1 , MEDIUM, LARGE, EXTRA_LARGE} PIZZA;

int main() {
    const int size = 6;
    int price[size] = {0, 6, 10, 20, 30};

    int choice = 0;

    printf("\n----PIZZA PRICELIST----\n");
    for (int i = 1; i < size; ++i) {
        switch (i) {
        case SMALL: printf(" 1.SMALL PIZZA -> %d$\n", price[SMALL]); break;
        case MEDIUM: printf(" 2.MEDIUM PIZZA -> %d$\n", price[MEDIUM]); break;
        case LARGE: printf(" 3.LARGE PIZZA -> %d$\n", price[LARGE]); break;
        case EXTRA_LARGE: printf(" 4.EXTRA LARGE -> %d$\n", price[EXTRA_LARGE]); break;
        }
    }
    printf("-----------------------\n");
    
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    switch (choice) {
        case SMALL : printf("Your choice is SMALL PIZZA -> %d", price[SMALL]); break;
        case MEDIUM : printf("Your choice is MEDIUM PIZZA -> %d", price[MEDIUM]); break;
        case LARGE : printf("Your choice is LARGE PIZZA -> %d", price[LARGE]); break;
        case EXTRA_LARGE : printf("Your choice is EXTRA_LARGE -> %d", price[EXTRA_LARGE]); break;
    }
    printf("\n");


    return 0;
}
