#include <stdio.h>

typedef union {
    float usd;
    float eur;
} Currency;
    
int main() {
    Currency c1;

    c1.usd = 380.91;
    c1.eur = 447.30;
    
    printf("Euro: %.2f\nUsd: %.2f\n", c1.eur, c1.usd);
    return 0;
} 
