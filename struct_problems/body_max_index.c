#include <stdio.h>
    
typedef struct {
    float weight;
    float height;
} Person;

int main() {
    Person p1;
    
    printf("Enter weight (kg): ");
    scanf("%f", &p1.weight);

    printf("Enter height (cm): ");
    scanf("%f", &p1.height);
    
    p1.height = p1.height / 100;
   
    float BMI = p1.weight / (p1.height * p1.height);
  
    printf("BMI: %.2f\n", BMI);


    if (BMI < 18.5) {
        printf("Underweight\n");
    } else if (BMI < 25) {
        printf("Normal\n");
    } else {
        printf("Overweight\n");
    }
    
    return 0;
}
      
