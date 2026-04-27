#include<stdio.h>
#include<conio.h>
void main(){
	int a;
	do {
		printf("Enter Your Number: ");
		scanf("%d",&a);
	}while(a<=0);
	{
		printf("Your Positive Number is %d",a);
	}
}
