#include <stdio.h>

typedef union {
    int intValue;
    char charValue;
} Data;

int main() {
    Data d1;

    d1.intValue = 88;

    printf("intValue: %d\n", d1.intValue);
    printf("charValue: %c\n", d1.charValue);

    return 0;
}
