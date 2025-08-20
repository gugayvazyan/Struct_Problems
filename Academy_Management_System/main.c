#include <stdio.h>
#include "header.h" 

int main() {
        
	Student st[10];
        
    addStudent(&st[0]);
	
	inputMonthlyExam(&st[0]);

	calculateTotal(&st[0]);
	
	checkPassed(&st[0]);
	
	int month1 = st->monthExams[0];
	int month2 = st->monthExams[1];
	minScoreForThirdMonth(month1, month2);

	printStudentReport(&st[0]);

      return 0;

} 
