#include<stdio.h>
int main()
{
	float s1,s2,s3,s4,s5,s6,s7,s8,s9,s10;
	
	
	
	printf("Enter 10 students hieght: ");
	
	scanf("%f %f %f %f %f %f %f %f %f %f",&s1,&s2,&s3,&s4,&s5,&s6,&s7,&s8,&s9,&s10);
	
	printf("\nAll hieght sum : %.2f CM.",s1+s2+s3+s4+s5+s6+s7+s8+s9+s10);
	
	float avg = ((s1+s2+s3+s4+s5+s6+s7+s8+s9+s10));
	
	printf("\n\nStudents average hieght is %.2f CM.",avg/10);
	return 0;
}
