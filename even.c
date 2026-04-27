/*#include<stdio.h>
#include<conio.h>
int main(){
	int n;
	printf("Enter Your Number: ");
	scanf("%d",&n);
	if(n%2==0){
		printf("%d is  \"EVEN Number\" ",n);
	}
	else {
		printf("%d is  \"ODD Number\" ",n);
	}
}
*/

#include<stdio.h>
#include<conio.h>
void main(){
    int i;
	for(i=0;i<=99;i=i+2){
		printf("%d is \"EVEN NUMBER\" \n ", i);
	}
}
