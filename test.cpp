#include<stdio.h>
void getScore(float *midterm, float *final, float *lab){
	printf("Enter Midterm: ");
	scanf("%f", &*midterm);
	printf("Enter Final: ");
	scanf("%f", &*final);
	printf("Enter LAB: ");
	scanf("%f", &*lab);
}
float calTotalScore(float *m, float *f, float *l){
	float total = *m + *f + *l ;
	return total;	
}
char gradeEng(float *score){
	char grade;
	if(*score < 60 && *score >= 0) grade = 'F';
	if(*score >= 60 && *score <= 69.99) grade = 'D';
	if(*score >= 70 && *score <= 79.99) grade = 'C';
	if(*score >= 80 && *score <= 89.99) grade = 'B';
	if(*score >= 90 && *score <= 100.00) grade = 'A';
	return grade;
}
int gradeThai(char *grade){
	int gradeNumber;
	switch(*grade){
		case 'F' : gradeNumber = 0;
					break;
		case 'D' : gradeNumber = 1;
					break;
		case 'C' : gradeNumber = 2;
					break;
		case 'B' : gradeNumber = 3;
					break;
		case 'A' : gradeNumber = 4;
					break;	
	}
	return gradeNumber;
}
int main(){
	float midterm,final,lab ;
	getScore(&midterm,&final,&lab);
	//printf("%.2f	%.2f	%.2f", midterm, final, lab);
	float totalScore = calTotalScore(&midterm, &final, &lab);
	printf("%.2f\n", totalScore);
	char grade = gradeEng(&totalScore);
	printf("%c\n", grade);
	int gradeNumber = gradeThai(&grade);
	printf("%d", gradeNumber);
}
