#include<stdio.h>
#include<conio.h>
int main(){
  int a,b,sum,n;
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
    a=b;
    b=sum;
    sum=a+b;
    
  }
  printf("\n FBONACCI SERIES COMPLETED:");
  return 0;
}
