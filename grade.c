#include<stdio.h>
#include<conio.h>
int main(){
	int m1,m2,m3,m4;
	float grade;
	printf("Enter your Marks: m1,m2,m3,m4: ");
	scanf("%d,%d,%d,%d", &m1,&m2,&m3,&m4);
	grade=(float)(m1+m2+m3+m4)/4;
	if (m1 < 40 || m2 < 40 || m3 < 40 || m4 < 40){
		printf("YOU GOT m1 is %d, m2 is %d, m3 is %d and m4 is %d\n",m1,m2,m3,m4);
		printf("Avergae is %.2f\n",grade);
		printf("%.2f is your result. Sorry You are Failed",grade);
	}
	else{
		printf("%f is your result. \"CONGRATULATIONS!\", YOU PASSED",grade);
	}

}
