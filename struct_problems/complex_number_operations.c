#include <stdio.h>

typedef struct {
    float real;
    float imag;
} Complex;

int main() {
    Complex c1, c2, sum, prod;
    
    
    printf("Enter real and imag. for first complex number: ");
    scanf("%f %f", &c1.real, &c1.imag);

    printf("Enter real and imag. for second complex number: ");
    scanf("%f %f", &c2.real, &c2.imag);

    sum.real = c1.real + c2.real;
    sum.imag = c1.imag + c2.imag;

    prod.real = c1.real * c2.real - c1.imag * c2.imag;
    prod.imag = c1.real * c2.imag + c2.real * c1.imag;
    
    printf("Sum real: %.2f | Sum imag: %.2f\n", sum.real, sum.imag);
    printf("Product real: %.2f | Product imag: %.2f\n", prod.real, prod.imag);
    
    return 0;
}
