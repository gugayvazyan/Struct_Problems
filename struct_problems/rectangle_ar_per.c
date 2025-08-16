#include <stdio.h>

typedef struct {
    int length;
    int width;
} Rectangle; 
    

int main() {
    Rectangle r1;

    printf("Input length: ");
    scanf("%d", &r1.length);

    printf("Input width: ");
    scanf("%d", &r1.width);
    
    int perim = 2 * (r1.length + r1.width);
    int area = r1.length * r1.width;

    printf("Perimeter: %d\n", perim);
    printf("Area: %d\n", area);

    return 0;
}
