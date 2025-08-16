#include <stdio.h>

typedef struct {
    float celsius;
    float fahrenheit; 
} Temperature;

int main() {
    Temperature t1;
    
    printf("Enter temperature in Celsius: ");
    scanf("%f", &t1.celsius);
    
    t1.fahrenheit = (t1.celsius * 9/5 ) + 32;
    
    printf("Celsius: %.2f\nFahrenheit: %.2f\n", t1.celsius, t1.fahrenheit);
    
    return 0;
}
