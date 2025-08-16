#include <stdio.h>


typedef struct {
    int age;
    float height;
} Person;

int main() {
    Person p1, p2;

    printf("Enter first Person age and height: ");
    scanf("%d %f", &p1.age, &p1.height);
   
    printf("Enter second Person age and height: ");
    scanf("%d %f", &p2.age, &p2.height);
    
    if (p1.age > p2.age) {
        printf("Person 1 is older.\n");
    } else if (p2.age > p1.age) {
        printf("Person 2 is older.\n");
    } else {
        printf("Both persons are the same age.\n");
    }
    
    return 0;
}
