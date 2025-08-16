#include <stdio.h>

typedef union {
    int number;
    char flag;
} Flag;
    

int main() {
    Flag f1;

    f1.number = 33;
    
    
    printf("Number: %d\n", f1.number);
    printf("Flag (as char): %c\n", f1.flag);

    return 0;
}    
