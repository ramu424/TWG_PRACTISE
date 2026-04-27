#include<stdio.h>
#include<conio.h>
int main(){
	int y;
	printf("Enter Your Year to check: ");
	scanf("%d",&y);
	if ((y%4 == 0 && y%100 != 0) && (y%400 == 0)){
		printf("y is a Leap Year %d",y);
	}
	else{
		printf("%d is not a Leap Year ",y);
	}
	return 0;
}
