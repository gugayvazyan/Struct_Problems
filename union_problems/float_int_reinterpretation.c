#include <stdio.h>

typedef union {
    float floatValue;
    int intValue;
} Value;

int main() {
    Value v1;

    v1.floatValue = 3.14;
    
    printf("intValue (decimal): %d\nintValue (hex): 0x%X\nfloatValue: %f\n", v1.intValue, v1.intValue, v1.floatValue);
    return 0;
}
