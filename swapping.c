#include<stdio.h>
#include<conio.h>
int main(){
	int a,b,temp;
	printf("Enter Your Number A: ");
	scanf("%d",&a);
	printf("Enter Your Number B: ");
	scanf("%d",&b);
	temp=a;
	a=b;
	b=temp;
	printf("\nAfter swapping \"A\" value is %d",a);
	printf("\nAfter Swapping \"B\" value is %d",b);
	return 0;
	}
