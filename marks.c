#include<stdio.h>
int main(){
	int m1,m2,m3,m4;
	printf("Enter the values of m1,m2,m3,m4: ");
	scanf("%d,%d,%d,&d",&m1,&m2,&m3,m4);
	float grade;
	grade=(float)(m1+m2+m3+m4)/4;
	printf("Your Percentage is %f",grade);
	return 0;
}
