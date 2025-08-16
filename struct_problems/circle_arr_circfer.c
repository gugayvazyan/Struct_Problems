#include <stdio.h>

#define PI 3.14

typedef struct {
    float radius;
} Circle;

int main() {
    Circle c1;
    
    printf("Enter radius for circle: ");
    scanf("%f", &c1.radius);
    
    float circumference = 2 * PI * c1.radius;
    float area = PI * c1.radius * c1.radius;
    
    printf("Circumference: %.2f\nArea: %.2f\n", circumference, area);

    return 0;
}

    
