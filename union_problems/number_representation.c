#include <stdio.h>

typedef union {
    int intValue;
    float floatValue;
} Number;

int main() {
    Number num;
    
    num.intValue = 55;
    printf("intValue: %d\n", num.intValue);
    printf("floatValue: %.2f\n", num.floatValue);
    
    num.floatValue = 3.14;
    printf("intValue: %d\n", num.intValue);
    printf("floatValue: %.2f\n", num.floatValue);
    
    return 0;
}

