#include <stdio.h>

typedef struct {
    int num1;
    int num2;
} Pair;

int main() {
    Pair p1, temp;
    
    printf("Enter 2 number: ");
    scanf("%d %d", &p1.num1, &p1.num2);
    
    temp = p1;
    p1.num1 = temp.num2;
    p1.num2 = temp.num1;
    
    printf("Swapped: %d %d\n", p1.num1, p1.num2);
    
    return 0;
}
