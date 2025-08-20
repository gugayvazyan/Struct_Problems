#include <stdio.h>
#include <string.h> 
#include "header.h"


void addStudent(Student* s) {

	printf("------------Academy Managment System------------\n");
    
    printf("Input full name (Name_Surname): ");
    fgets(s->student, size, stdin);
    s->student[strcspn(s->student, "\n")] = '\0';

    printf("Input ID: ");
    scanf("%d", &s->id);


    printf("________________________\n    Choose your group  \n1.C++|\n2.Web|\n3.AI |\n4.DevHack|\n");
	do {
		printf("Enter valid  value (1-4): ");
		scanf("%d", &s->lenguage);
	} while ( s->lenguage > 4 || s->lenguage < 1);
	
	
    printf("________________________\n    Choose your phase  \n1.Computer Science|\n2.Core Language|\n3.Specialties |\n");
	do {
		printf("Enter valid value (1-3):  ");
		scanf("%d", &s->phase);
	} while ( s->phase > 4 || s->phase < 1);
}



void inputMonthlyExam(Student* s) { 
	printf("---------------------------------\n");
	for (int i = 0; i < exam; ++i) {
       	switch (i) {
           	case 0 : printf("Enter your fisrt exam score: "); break;
           	case 1 : printf("Enter your second exam score: "); break;
       		case 2 : printf("Enter your third exam score: "); break;
        }
       scanf("%d", &s->monthExams[i]);
    }
}


void calculateTotal(Student* s) {

	for (int i = 0; i < exam; ++i) {
	 switch (i) {
            case 0 : s->totalScore += s->monthExams[i] * 0.1; break;
            case 1 : s->totalScore += s->monthExams[i] * 0.1; break;
            case 2 : s->totalScore += s->monthExams[i] * 0.8; break;
        }
	}
}




float  minScoreForThirdMonth(int month1, int month2) {
	float  total = 0;	
	int min = 80 ;
	for (int i = 0; i < exam; ++i) {
	 	switch (i) {
            case 0 : total += month1 * 0.1; break;
            case 1 : total += month2 * 0.1;  break;
      	}
	}
	total = min - total;
	total = total / 0.8;
	return total;
}



void checkPassed(Student* s) {

	if(s->totalScore >= 80) {
		s->passed = 1;
	} else if ( s->totalScore <= 80) {
		s->passed = 0;
	}
}



void printStudentReport(Student *s) {
	
	printf("---------------------------------------------------------------\n");
	printf("%s %d ", s->student, s->id);
	
	switch (s->lenguage) {
		
		case CPP: printf("C++ "); break;
		case Web: printf("Web "); break;
		case AI: printf("AI "); break;
		case DevHack: printf("DevHack "); break;  

	}
	
	switch (s->phase) {
		case COMPUTER_SCIENCE: printf("Copmuter Since "); break;
		case CORE_LANGUAGE: printf("Core Language "); break;
		case SPECIALTIES: printf("Specialties "); break;
	}
	
	for (int i = 0; i < exam; ++i) {
		printf("%d ",s->monthExams[i]);
	} 
		printf("%.2f ",s->totalScore);
	
	if  (s->passed == 0)  printf("Failed\n");
	else  printf("Passed\n");
	
	int month1 = s->monthExams[0];
	int month2 = s->monthExams[1];
	printf("You need %.2f to pass\n", minScoreForThirdMonth(month1, month2));
	
	
	printf("----------------------------------------------------------------\n");
}	
