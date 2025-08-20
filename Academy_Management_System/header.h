#ifndef ACCADEMY_H
#define ACCADEMY_H
#define size 60
#define exam 3
//void addStudent(Student* s);

typedef enum {CPP = 1, Web, AI, DevHack} Language; 
typedef enum {COMPUTER_SCIENCE = 1, CORE_LANGUAGE, SPECIALTIES} Phase;

typedef struct {
    char student[size];
    int id;
    int lenguage;
   int phase;
    int monthExams[exam];
    float totalScore;
    int passed;
} Student;

void addStudent(Student* s);
void inputMonthlyExam(Student* s);
void calculateTotal(Student* s);
void checkPassed(Student* s);
void printStudentReport(Student *s);
float minScoreForThirdMonth(int month1, int month2);

#endif //ACCADEMY_H
