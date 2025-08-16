#include <stdio.h>
 
typedef union {
    int length;
    float weight;

} Measurement;

int main() {
    Measurement m1;
    
    char choose;
    printf("Please choose Length(l) or Weight(w): ");
    scanf(" %c", &choose);
    
    
    if (choose  == 'l') {
        printf("Enter length: ");
        scanf("%d", &m1.length);
        printf("Stored length: %d\n", m1.length);
    } else if (choose == 'w') {
        printf("Enter weight: ");
        scanf("%f", &m1.weight);
        printf("Stored weight: %.2f\n", m1.weight);
    }
    
    
    return 0;
}
