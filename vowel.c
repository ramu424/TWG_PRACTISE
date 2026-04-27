#include<stdio.h>
#include<conio.h>
int main(){
	char ch;
	printf("Enter your Character: ");
	scanf("%c",&ch);
	if(ch == 'a' || ch== 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U'){
/*#printf("\"%c\"" is VOWEL",ch);"*/
				printf("\"%c\" is VOWEL",ch);
	}
	else{
/*printf("\"%c\"" is CONSONANT",ch);*/
		printf("\"%c\" is CONSONANT", ch);
	}
}

