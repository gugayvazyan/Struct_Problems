#include <stdio.h>
#include <math.h>

typedef struct {
    float x;
    float y;
} Point;


int main() {
    Point p1, p2;
    
    printf("Enter first pointer (x,y): ");
    scanf("%f %f", &p1.x, &p1.y);
    
    printf("Enter second pointer (x,y): ");
    scanf("%f %f", &p2.x, &p2.y);

    float dx = p2.x - p1.x;
    float dy = p2.y - p1.y;
    float distance = sqrt(dx * dx + dy * dy);
    
    printf("Euclidean distance: %.2f\n", distance);
    
    return 0;
}

