/* Modify the previous program to print
 a + or - after the letter grade,
based on the last digit of the score. */

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
	
	//-----changes-----
	char modifer = '\b';
	
	if(grade > 60){
	
		if(grade%10 > 0 && grade%10 < 4){
			modifer = '-';
		}
		
		else if((grade%10 > 7 && grade%10 <= 9) || grade%10 == 0){
			modifer = '+';
		}
	}
	
	printf("The numeric grade %d in letter is %c%c\n",grade,char_grade,modifer);
	
	return 0;
}
