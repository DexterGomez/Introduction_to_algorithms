/* Given a numeric grade, print the letter. */

#include <stdio.h>

int main(){
	int grade;
	char char_grade;
	
	printf("Insert the numeric grade: ");
	scanf("%d",&grade);
	
	if(grade <= 60){
		char_grade = 'F';
	}
	
	else if(grade > 60 && grade <= 70){
		char_grade = 'D';
	}
	
	else if(grade > 70 && grade <= 80){
		char_grade = 'C';
	}
	
	else if(grade > 80 && grade <= 90){
		char_grade = 'B';
	}
	
	else if(grade > 90 && grade <= 100){
		char_grade = 'A';
	}
	
	printf("The numeric grade %d in letter is %c\n",grade,char_grade);
	
	return 0;
}
