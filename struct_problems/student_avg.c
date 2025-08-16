#include <stdio.h>

typedef struct {
    float mathGrade;
    float physicsGrade;
    float chemistryGrade;
}   Student;
   
int main() {
    Student p1;
    
    printf("Input your math grade: ");
    scanf("%f", &p1.mathGrade);

    printf("Input your physics grade: ");
    scanf("%f", &p1.physicsGrade);

    printf("Input your chemistry grade: ");
    scanf("%f", &p1.chemistryGrade);

    float avg = (p1.mathGrade + p1.physicsGrade + p1.chemistryGrade) / 3;
    
    printf("Average grade: %.1f\n", avg);
    
    return 0;
} 
    
    
