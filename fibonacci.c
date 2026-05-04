#include<stdio.h>
int main(){
  int a=0,b=1,sum,n;
printf("Enter Your Number to check Fibonacci Series: ");
  scanf("%d",&n);
  if(n>=0){
    printf("%d",a);
  }
  if(n>=1){
    printf(", %d",b);
  }
  sum=a+b;
  while(sum<=n){
	printf(",%d",sum);
    a=b;
    b=sum;
    sum=a+b;
    
  }
  printf("\n FBONACCI SERIES COMPLETED:");
  return 0;
}
